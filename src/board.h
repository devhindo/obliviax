#include "operations.h"

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

    void ChessBoardInit() {
        WhitePawns = 0x000000000000FF00;
        WhiteRocks = 0x0000000000000081;
        WhiteKnights = 0x0000000000000042;
        WhiteBishops = 0x0000000000000024;
        WhiteQueens = 0x0000000000000010;
        WhiteKing = 0x0000000000000008;

        BlackPawns = 0x00FF000000000000;
        BlackRocks = 0x8100000000000000;
        BlackKnights = 0x4200000000000000;
        BlackBishops = 0x2400000000000000;
        BlackQueens = 0x0100000000000000;
        BlackKing = 0x1000000000000000;

        AllWhitePieces = WhitePawns | WhiteRocks | WhiteKnights | WhiteBishops | WhiteQueens | WhiteKing;
        AllBlackPieces = BlackPawns | BlackRocks | BlackKnights | BlackBishops | BlackQueens | BlackKing;

        AllPieces = AllWhitePieces | AllBlackPieces;
    }
};