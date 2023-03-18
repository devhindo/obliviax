#include "chess.h"

Bitboard MaskRank(char n) {
    Bitboard mask = 0x00000000000000FF;
    while(--n) {
        mask <<= 8;
    }
    return mask;
}