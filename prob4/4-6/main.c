/* forの二重ループを用いて、以下のように九九の表を作るプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>

int main() {

int i;
int j;

for(i = 1; i <= 9; i++) {
  for(j =1 ;j <= 9; j++) {
    printf("%d * %d = %d ",i,j,i*j) ;
  }
  printf("\n");
}

/* 終了 */
  return 0 ;
}

