/* 1から10までの乱数を発生させ、偶数なら、★を、奇数なら☆を、それぞれ発生した数の分だけ表示するプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

srand((unsigned)time(NULL)) ;

int i ;
int num ;

num = rand() % 10 + 1 ;

printf("%d\n",num);

if(num % 2 == 0) {
  for (i = 0; i <= num; i++) {
    printf("★");
  }
} 
else if(num % 2 == 1) {
  for(i = 0; i <= num; i++) {
    printf("☆") ;
  }
}
else {
  /* 処理なし */
}

/* 終了 */
  return 0 ;
}