/* 1から100までの乱数を5回発生させ、表示し、終了後その中の最大値を表示 するプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i;
  int num ;  
  int max = 0;
  srand((unsigned)time(NULL));

  for (i = 0; i < 5; i++) {
    num = rand() % 100 +1;
    printf("数字：%d\n",num);

    if( num > max) {
      max = num ;
    }
  }

  printf("最大値：%d",max) ;

  /* 終了 */
  return 0;
}