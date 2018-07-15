#include <iostream>
#include <vector>
using namespace std;

typedef uint64_t u64;
const u64 ALL_BITS_ON = 0xffffffffffffffff;
const u64 A1 = 1;
const u64 B1 = 1UL << 1;
const u64 C1 = 1UL << 2;
const u64 D1 = 1UL << 3;
const u64 E1 = 1UL << 4;
const u64 F1 = 1UL << 5;
const u64 G1 = 1UL << 6;
const u64 H1 = 1UL << 7;
const u64 A2 = 1UL << 8;
const u64 B2 = 1UL << 9;
const u64 C2 = 1UL << 10;
const u64 D2 = 1UL << 11;
const u64 E2 = 1UL << 12;
const u64 F2 = 1UL << 13;
const u64 G2 = 1UL << 14;
const u64 H2 = 1UL << 15;
const u64 A3 = 1UL << 16;
const u64 B3 = 1UL << 17;
const u64 C3 = 1UL << 18;
const u64 D3 = 1UL << 19;
const u64 E3 = 1UL << 20;
const u64 F3 = 1UL << 21;
const u64 G3 = 1UL << 22;
const u64 H3 = 1UL << 23;
const u64 A4 = 1UL << 24;
const u64 B4 = 1UL << 25;
const u64 C4 = 1UL << 26;
const u64 D4 = 1UL << 27;
const u64 E4 = 1UL << 28;
const u64 F4 = 1UL << 29;
const u64 G4 = 1UL << 30;
const u64 H4 = 1UL << 31;
const u64 A5 = 1UL << 32;
const u64 B5 = 1UL << 33;
const u64 C5 = 1UL << 34;
const u64 D5 = 1UL << 35;
const u64 E5 = 1UL << 36;
const u64 F5 = 1UL << 37;
const u64 G5 = 1UL << 38;
const u64 H5 = 1UL << 39;
const u64 A6 = 1UL << 40;
const u64 B6 = 1UL << 41;
const u64 C6 = 1UL << 42;
const u64 D6 = 1UL << 43;
const u64 E6 = 1UL << 44;
const u64 F6 = 1UL << 45;
const u64 G6 = 1UL << 46;
const u64 H6 = 1UL << 47;
const u64 A7 = 1UL << 48;
const u64 B7 = 1UL << 49;
const u64 C7 = 1UL << 50;
const u64 D7 = 1UL << 51;
const u64 E7 = 1UL << 52;
const u64 F7 = 1UL << 53;
const u64 G7 = 1UL << 54;
const u64 H7 = 1UL << 55;
const u64 A8 = 1UL << 56;
const u64 B8 = 1UL << 57;
const u64 C8 = 1UL << 58;
const u64 D8 = 1UL << 59;
const u64 E8 = 1UL << 60;
const u64 F8 = 1UL << 61;
const u64 G8 = 1UL << 62;
const u64 H8 = 1UL << 63;

const u64 knight_attacks[64][8] = { 
    {B3, C2}, // A1
    {C3, D2, A3}, // B1
    {B3, D3, E2, A2}, // C1
    {B2, C3, E3, F2}, // D1
    {C2, D3, F3, G2}, // E1
    {E3, G3, D2, H2}, // F1
    {E2, F3, H3}, // G1
    {F2, G3}, // H1
    {B4, C3, C1}, // A2 
    {C4, D3, D1, A4}, // B2
    {B4, D4, E3, E1, A1, A3}, // C2
    {B3, C4, E4, F3, F1, B1}, // D2
    {C3, D4, F4, G3, G1, C1}, // E2
    {D3, E4, G4, H3, H1, D1}, // F2
    {E3, F4, H4, E1}, // G2
    {F3, G4, F1}, // H2
    {B5, C4, C2, B1}, // A3
    {C5, D4, D2, C1, A5, A1}, // B3
    {B5, D5, E4, E2, D1, B1, A2, A4}, // C3
    {B2, B4, C5, E5, F4, F2, E1, C1}, // D3
    {C2, C4, G2, G4, D5, F5, D1, F1}, // E3
    {D2, D4, E5, G5, H4, H2, G1, E1}, // F3
    {E2, E4, F5, H5, H1, F1}, // G3
    {F2, F4, G5, G1}, // H3
    {B6, C5, C3, B2}, // A4
    {C2, D3, D5, C6, A6, A2}, // B4
    {B2, A3, A5, B6, D6, E5, E3, D2}, // C4
    {C2, B3, B5, C6, E6, F5, F3, E2}, // D4
    {D2, C3, C5, D6, F6, G5, G3, F2}, // E4
    {E2, D3, D5, E6, G6, H5, H3, G2}, // F4
    {F2, E3, E5, F6, H6, H2}, // G4
    {G2, F3, F5, G6}, // H4
    {B7, C6, C4, B3}, // A5
    {C7, D6, D4, C3, A3, A7}, // B5
    {B7, D7, E6, E4, D3, B3, A4, A6}, // C5
    {B4, B6, C7, E7, F6, F4, E3, C3}, // D5
    {D3, C4, C6, D7, F7, G6, G4, F3}, // E5
    {E3, D4, D6, E7, G7, G3, H6, H4}, // F5
    {F3, E4, E6, F7, H7, H3}, // G5
    {G3, F4, F6, G7}, // H5
    {B4, C5, C7, B8}, // A6
    {D7, D5, C4, A4, A8, C8}, // B6
    {E7, E5, D4, B4, A5, A7, B8, D8}, // C6
    {F7, F5, E4, C4, B5, B7, C8, E8}, // D6
    {G7, G5, F4, D4, C5, C7, D8, F8}, // E6
    {G4, E4, D5, D7, E8, G8, H7, H5}, // F6
    {F4, E5, E7, F8, H8, H4}, // G6
    {G4, F5, F7, G8}, // H6
    {B5, C6, C8}, // A7
    {C5, D6, D8, A5}, // B7
    {B5, D5, E6, E8, A8, A6}, // C7
    {B8, B6, C5, E5, F6, F8}, // D7
    {C8, C6, D5, F5, G6, G8}, // E7
    {D8, D6, E5, G5, H6, H8}, // F7
    {E8, E6, F5, H5}, // G7
    {F8, F6, G5}, // H7
    {B6, C7}, // A8
    {D7, C6, A6}, // B8
    {A7, B6, D6, E7}, // C8
    {B7, C6, E6, F7}, // D8
    {C7, D6, F6, G7}, // E8
    {D7, E6, G6}, // F8
    {E7, F6, H6}, // G8
    {F7, G6} // H8
};

const char* square_names[64] = {
    "a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1",
    "a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2",
    "a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3",
    "a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4",
    "a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5",
    "a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6",
    "a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7",
    "a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8"
};

typedef u64 move_t;
typedef struct game_state {
    game_state() {
        state = A1;
        moves.push_back(A1);
    }
    u64 state;
    vector<move_t> moves;
    u64 count;
} game_state_t;

int bit_num(move_t move) {
    int n = 0;
     while((move = move>>1)) n += 1;
     return n;
}

bool is_solved(const game_state_t& gs) {
    return gs.state == ALL_BITS_ON;
}

void generate_moves(const game_state_t& gs, vector<move_t>& candidates) {
    int n = bit_num(gs.moves.back());

    for (int i = 0; i < 8; i++) {
        move_t m = knight_attacks[n][i];
        if (m && (m & gs.state) == 0) {
            candidates.push_back(m);
        }
    }
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
    for (vector<move_t>::const_iterator it = gs.moves.begin(); it != gs.moves.end(); it++) {
        cout << square_names[bit_num(*it)] << " ";
    }
}

bool dfs(game_state_t& gs) {
    if (is_solved(gs)) {
        return true;
    }
   
    vector<move_t> candidates;
    generate_moves(gs, candidates);
    for (vector<move_t>::const_iterator it = candidates.begin(); it != candidates.end(); it++) {
        make_move(gs, *it);
        if (dfs(gs)) return true;
        
        return true;
        undo_move(gs, *it);
    }
    return false;
}

int main() {
    game_state_t gs;
    dfs(gs);
    
    cout << "Looked at " << gs.count << " moves, " << endl;
    cout << "Found move sequence: ";
    print_moves(gs);
    cout << endl;

    return 0;
}
