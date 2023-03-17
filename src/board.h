#pragma once
#include "chess.h"

struct ChessBoard {
    Bitboard WhitePawns;
    Bitboard WhiteRocks;
    Bitboard WhiteKnights;
    Bitboard WhiteBishops;
    Bitboard WhiteQueens;
    Bitboard WhiteKing;

    Bitboard BlackPawns;
    Bitboard BlackRocks;
    Bitboard BlackKnights;
    Bitboard BlackBishops;
    Bitboard BlackQueens;
    Bitboard BlackKing;

    Bitboard AllWhitePieces;
    Bitboard AllBlackPieces;
    Bitboard AllPieces;
};