#include <iostream>
#include <vector>
#include <algorithm>
#include "squares.h"
#include "unvisited_degree.h"
#include "move.h"
#include "game_state.h"
#include "utils.h"

bool is_solved(const game_state_t& gs) {
    return gs.state == ALL_BITS_ON;
}

void generate_moves(const game_state_t& gs, std::vector<move_t>& candidates) {
    int n = bit_num(gs.moves.back());

    for (int i = 0; i < 8; i++) {
        move_t m = knight_attacks[n][i];
        if (!m) break;
        if ((m & gs.state) == 0) {
            candidates.push_back(m);
        }
    }

    std::sort(candidates.begin(), candidates.end(), unvisited_degree(gs));
}

void make_move(game_state_t& gs, const move_t& move) {
    gs.state ^= move;
    gs.count++;
    gs.moves.push_back(move);
}

void undo_move(game_state_t& gs, const move_t& move) {
    gs.state ^= move;
    gs.moves.pop_back();
}

void print_moves(const game_state_t& gs) {
    for (std::vector<move_t>::const_iterator it = gs.moves.begin(); it != gs.moves.end(); it++) {
        std::cout << square_names[bit_num(*it)] << " ";
    }
}

bool dfs(game_state_t& gs) {
    if (is_solved(gs)) {
        return true;
    }
   
    std::vector<move_t> candidates;
    generate_moves(gs, candidates);
    for (std::vector<move_t>::const_iterator it = candidates.begin(); it != candidates.end(); it++) {
        make_move(gs, *it);
        if (dfs(gs)) return true;
        
        gs.checked_paths++;
        if (gs.checked_paths % 1000000 == 0) {
            std::cout << gs.checked_paths << std::endl;
        }
        undo_move(gs, *it);
    }
    return false;
}

int main() {
    game_state_t gs;
    dfs(gs);
    
    std::cout << "Looked at " << gs.count << " moves, " << std::endl;
    std::cout << "Found move sequence: ";
    print_moves(gs);
    std::cout << std::endl;

    return 0;
}
