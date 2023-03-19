#include <bitset>
#include "board.h"
using namespace std;

int main() {
    ChessBoard board;
    board.ChessBoardInit();
    bitset<64> y(board.WhitePawns);
    cout << y << endl;
    bitset<64> x(board.BlackPawns);
    cout << x << endl;

}