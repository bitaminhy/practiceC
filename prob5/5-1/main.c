/* 整数型の配列変数dataを作成し、以下の条件のとおりの初期値を入れるものとする。

大きさは、10
値は1から10までの乱数を発生させて代入する
このとき、実行例のように、値をすべて表示し、その中の偶数の数と、奇数の数を表示するプログラム
 */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* マクロ定義 */
#define NUM_DATA (10) /* 配列の要素数 */

int main () {
srand((unsigned)time(NULL)) ;

int i ; /* for文用の変数 */
int even ; /* 偶数を格納する変数 */
int odd ; /* 奇数を格納する変数 */

/* 配列 */
int data[NUM_DATA] ; 

for(i = 0; i < NUM_DATA; i++) {
  data[i] = rand() % 10 + 1 ;
  printf("%d ",data[i]) ;
}
printf("\n") ;
printf("偶数：") ;
for (i = 0; i < NUM_DATA; i++) {
if(data[i] % 2 == 0) {
    even = data[i] ;
    printf("%d ",even) ;
}
}
printf("\n") ;
printf("奇数：") ;
for (i = 0; i < NUM_DATA; i++) {
if(data[i] % 2 != 0) {
    odd = data[i] ;
    printf("%d ",odd) ;
}
}
printf("\n") ;

/* 終了 */
  return 0 ;
}


