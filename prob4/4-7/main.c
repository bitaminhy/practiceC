/* forの二重ループを用いてローディングしているような画像を表示するプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>

int main() {

/* for文用の変数 */
int i ;
int j ;

for(i = 1; i <= 10; i++) {
  for(j = 1; j <= i; j++) {
    printf("◾️");
  }
  for(j = 1; j <= 10 - i; j++) {
    printf("◻︎") ;
  }
  printf("\n") ;
}

/* 終了 */
  return 0;
}