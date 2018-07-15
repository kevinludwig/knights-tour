#ifndef __SQUARES_H__
#define __SQUARES_H__

#include <cstdint>
using std::uint64_t;

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

extern const u64 knight_attacks[64][8];
extern const char* square_names[64];

#endif
