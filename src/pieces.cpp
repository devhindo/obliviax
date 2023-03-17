#include <iostream>
typedef uint64_t Bitboard;

Bitboard WhitePawns = 0x000000000000FF00;
Bitboard WhiteRocks = 0x0000000000000081;
Bitboard WhiteKnights = 0x0000000000000042;
Bitboard WhiteBishops = 0x0000000000000024;
Bitboard WhiteQueens = 0x0000000000000010;
Bitboard WhiteKing = 0x0000000000000008;

Bitboard BlackPawns = 0x00FF000000000000;
Bitboard BlackRocks = 0x8100000000000000;
Bitboard BlackKnights = 0x4200000000000000;
Bitboard BlackBishops = 0x2400000000000000;
Bitboard BlackQueens = 0x0100000000000000;
Bitboard BlackKing = 0x1000000000000000;

Bitboard AllWhitePieces = WhitePawns | WhiteRocks | WhiteKnights | WhiteBishops | WhiteQueens | WhiteKing;
Bitboard AllBlackPieces = BlackPawns | BlackRocks | BlackKnights | BlackBishops | BlackQueens | BlackKing;

Bitboard AllPieces = AllWhitePieces | AllBlackPieces;