/* 整数型の配列変数dataを作成し、以下の条件のとおりの初期値を入れるものとする。

大きさは、10
値は、１から10の乱数
このとき、実行例のように、値をすべて表示し、その中の最大値と最小値を表示するプログラム
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
int max = 0 ; /* 偶数を格納する変数 */
int min = 100 ; /* 奇数を格納する変数 */

/* 配列 */
int data[NUM_DATA] ; 

for(i = 0; i < NUM_DATA; i++) {
  data[i] = rand() % 10 + 1 ;
  printf("%d ",data[i]) ;
}
printf("\n") ;
for (i = 0; i < NUM_DATA; i++) {
if(max < data[i]) {
    max = data[i] ;
}
}
printf("\n") ;
for (i = 0; i < NUM_DATA; i++) {
if(min > data[i]) {
    min = data[i] ;
}
}
printf("最大値：%d",max) ;
printf("最小値：%d",min) ;

/* 終了 */
  return 0 ;
}