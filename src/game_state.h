#ifndef __GAME_STATE_H__
#define __GAME_STATE_H__
#include <vector>
#include <iostream>
#include "squares.h"
#include "move.h"

class game_state {
    public:
        u64 state;
        std::vector<move_t> moves;
        u64 count;
    public:
    game_state(const move_t& initial): state(initial), count(0) {
        moves.push_back(initial);
    }
    bool is_solved() const;
    void generate_moves(std::vector<move_t>&) const;
    void make_move(const move_t&);
    void undo_move(const move_t&);

    friend std::ostream& operator<<(std::ostream& os, const game_state& gs);
}; 

#endif 
