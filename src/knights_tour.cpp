#include <iostream>
#include <vector>
#include <algorithm>
#include "squares.h"
#include "unvisited_degree.h"
#include "move.h"
#include "game_state.h"
#include "utils.h"

bool dfs(game_state& gs) {
    if (gs.is_solved()) {
        return true;
    }
   
    std::vector<move_t> candidates;
    gs.generate_moves(candidates);
    for (auto it = candidates.begin(); it != candidates.end(); it++) {
        gs.make_move(*it);
        if (dfs(gs)) return true; 
        
        if (gs.count % 1000000 == 0) {
            std::cout << gs.count << std::endl;
        }

        gs.undo_move(*it);
    }
    return false;
}

int main() {
    game_state gs(E4);
    dfs(gs);
   
    std::cout << gs << std::endl;

    return 0;
}
