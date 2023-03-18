#include "board.h"
using namespace std;

int main() {
    ChessBoard board;
    board.ChessBoardInit();
    cout << board.AllPieces << endl;
    cout << MaskRank(1) << endl;
}