#include "stdio.h"
#include "defs.h"


#define FEN_1 "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"

void PrintSquares();

int main(){

  AllInit();
  S_BOARD board[1];
  ParseFen(FEN_1, board);
  PrintBoard(board);

}
