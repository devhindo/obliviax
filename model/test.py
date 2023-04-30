import chess
import chess.engine
import random
import numpy

def random_board(max_depth=200):
    board = chess.Board()
    depth = random.randrange(0,max_depth)

    for _ in range(depth):
        all_moves = list(board.legal_moves)
        