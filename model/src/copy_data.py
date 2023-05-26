import os 
import random
import shutil

splitRatio = 0.85

dataDir = os.listdir('./dataset/Chess')
print(dataDir)

def split_data(src, training, validation, split_size):
    files = []

    for filename in os.listdir(src):
        file = src + filename
        if os.path.getsize(file) > 0:
            files.append(filename)
        else:
            print(filename + " is zero length, so ignoring.")
    print(len(files))

    training_length = int(len(files) * split_size)
    validation_length = int(len(files) - training_length)
    shuffled_set = random.sample(files, len(files))

    training_set = shuffled_set[0:training_length]
    validation_set = shuffled_set[:validation_length]

    for filename in training_set:
        this_file = src + filename
        destination = training + filename
        shutil.copyfile(this_file, destination)

    for filename in validation_set:
        this_file = src + filename
        destination = validation + filename
        shutil.copyfile(this_file, destination)
    
BishopSrc = './dataset/Chess/Bishop/'
BishopTrain = './dataset/train/Bishop/'
BishopVal = './dataset/validation/Bishop/'

KingSrc = './dataset/Chess/King/'
KingTrain = './dataset/train/King/'
KingVal = './dataset/validation/King/'

KnightSrc = './dataset/Chess/Knight/'
KnightTrain = './dataset/train/Knight/'
KnightVal = './dataset/validation/Knight/'

PawnSrc = './dataset/Chess/Pawn/'
PawnTrain = './dataset/train/Pawn/'
PawnVal = './dataset/validation/Pawn/'

QueenSrc = './dataset/Chess/Queen/'
QueenTrain = './dataset/train/Queen/'
QueenVal = './dataset/validation/Queen/'

RookSrc = './dataset/Chess/Rook/'
RookTrain = './dataset/train/Rook/'
RookVal = './dataset/validation/Rook/'

split_data(BishopSrc, BishopTrain, BishopVal, splitRatio)
split_data(KingSrc, KingTrain, KingVal, splitRatio)
split_data(KnightSrc, KnightTrain, KnightVal, splitRatio)
split_data(PawnSrc, PawnTrain, PawnVal, splitRatio)
split_data(QueenSrc, QueenTrain, QueenVal, splitRatio)
split_data(RookSrc, RookTrain, RookVal, splitRatio)
