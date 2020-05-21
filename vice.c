#include "stdio.h"
#include "defs.h"


#define FEN_1 "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"
#define FEN_2 "rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3 0 1"

void PrintSquares();

int main(){

  AllInit();
  S_BOARD board;
  ParseFen(FEN_1, &board);
  printf("empty?\n");
}
