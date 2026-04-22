/* 1から10までの乱数を発生させ、もしも5以上だったら、その数だけ★マークを表示し、5未満だったら、その数を表示するプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  srand((unsigned)time(NULL)) ;

  int i ;
  int num ;

  num = rand() %  100 + 1 ;
  if(num >= 5) {
    for (i = 0; i <= num; i++) {
      printf("★") ;
    }
    printf("\n") ;
    printf("発生した数字:%d",num) ;
  }
  else {
    printf("発生した数字は:%d",num) ;
  }

  return 0 ;
}