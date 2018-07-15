#ifndef __GAME_STATE_H__
#define __GAME_STATE_H__
#include <vector>
#include "squares.h"
#include "move.h"

typedef struct game_state {
    game_state(): state(A1), count(0), checked_paths(0) {
        moves.push_back(A1);
    }
    u64 state;
    std::vector<move_t> moves;
    u64 count;
    u64 checked_paths;
} game_state_t;

#endif 
