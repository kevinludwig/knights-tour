#include "unvisited_degree.h"
#include "squares.h"
#include "utils.h"

int unvisited_degree::degree_of(const move_t& m) {
    int degree = 0;
    int n = bit_num(m);
    for (int i = 0; i < 8; i++) {
        move_t m = knight_attacks[n][i];
        if (!m) break;
        if ((m & gs.state) == 0) degree++;
    } 
    return degree;
}
