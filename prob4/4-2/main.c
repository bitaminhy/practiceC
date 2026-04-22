/* 1から100までの乱数を5回発生させ、表示し、終了後その中の最小値を表示するプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

srand((unsigned)time(NULL)) ;
int i ;
int num ;
int min ;

min = 100 ;

for(i = 0; i < 5; i++) {
  num = rand() % 100 + 1 ;
  printf("数字:%d\n",num) ;
  if(num < min) {
    min = num ;
  }
}

printf("最小値:%d",min) ;

 /* 終了 */
  return 0 ;
}