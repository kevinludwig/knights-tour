#include <iostream>
#include <vector>
#include <algorithm>
#include "squares.h"
#include "unvisited_degree.h"
#include "move.h"
#include "game_state.h"
#include "utils.h"

bool game_state::is_solved() const {
    return state == ALL_BITS_ON;
}

void game_state::generate_moves(std::vector<move_t>& candidates) const {
    int n = bit_num(moves.back());

    for (int i = 0; i < 8; i++) {
        move_t m = knight_attacks[n][i];
        if (!m) break;
        if ((m & state) == 0) {
            candidates.push_back(m);
        }
    }

    std::sort(candidates.begin(), candidates.end(), unvisited_degree(*this));
}

void game_state::make_move(const move_t& move) {
    state ^= move;
    count++;
    moves.push_back(move);
}

void game_state::undo_move(const move_t& move) {
    state ^= move;
    moves.pop_back();
}

std::ostream& print_moves(std::ostream& os, const std::vector<move_t>& moves) {
    for (std::vector<move_t>::const_iterator it = moves.begin(); it != moves.end(); it++) {
        os << square_names[bit_num(*it)] << " ";
    }
    return os;
}

std::ostream& operator<<(std::ostream& os, const game_state& gs) {
    return os << "count: " << gs.count << std::endl
        << "solution: " << print_moves(os, gs.moves); 
}
