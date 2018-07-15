#ifndef __UNVISITED_DEGREE_H__
#define __UNVISITED_DEGREE_H__

#include "move.h"
#include "game_state.h"

class unvisited_degree {
    const game_state& gs;
    
    private:
    int degree_of(const move_t& m); 
    
    public:
    unvisited_degree(const game_state& gs):gs(gs) {}

    inline bool operator()(const move_t& m1, const move_t& m2) {
        return degree_of(m1) < degree_of(m2);
    }
};
#endif
