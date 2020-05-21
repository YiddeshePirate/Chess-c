#include "stdio.h"
#include "defs.h"


#define FEN_1 "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1"
//#define FEN_2 "r1bqr3/ppp1B1kp/1b4p1/n2B4/3PQ1P1/2P5/P4P2/RN4K1 w - - 1 0"

#define FEN_2 "rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3 0 1"

void PrintSquares();

int main(){

  AllInit();
  S_BOARD board;
  ParseFen(FEN_1, &board);
  printf("empty?\n");
}
