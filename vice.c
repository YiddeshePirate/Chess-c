#include "stdio.h"
#include "defs.h"

void PrintSquares();

int main(){

  AllInit();
  U64 playbitboard = 0ULL;
  U64 x = RAND_64;
  printf("%lld\n", x);
  x = (U64) rand() << 45;
  printf("%lld", x);

//  return 0  ;
}


void PrintSquares() {
  int index = 0;

  for (index = 0; index < BRD_SQ_NUM; ++index){
   if (index%10==0) printf("\n");
   printf("%5d", SQ64(index));
  }

  printf("\n\n");

  for (index = 0; index < 64; ++index){
    if (index%8==0) printf("\n");
    printf("%5d", Sq64ToSq120[index]);
  }
  printf("\n\n");
}
