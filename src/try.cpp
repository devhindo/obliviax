#include "board.h"
using namespace std;

int main() {
    ChessBoard board;
    cout << board.WhitePawns << endl;
    cout << board.WhiteRocks << endl;
    cout << board.WhiteKnights << endl;
    cout << board.WhiteBishops << endl;
    cout << board.WhiteQueens << endl;
    cout << board.WhiteKing << endl;
    cout << board.BlackPawns << endl;
    cout << board.BlackRocks << endl;
    cout << board.BlackKnights << endl;
    cout << board.BlackBishops << endl;
    cout << board.BlackQueens << endl;
    cout << board.BlackKing << endl;
    cout << board.AllWhitePieces << endl;
    cout << board.AllBlackPieces << endl;
    cout << board.AllPieces << endl;
    return 0;
}