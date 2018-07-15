#include "utils.h"

int bit_num(move_t move) {
    int n = 0;
     while((move = move>>1)) n += 1;
     return n;
}

