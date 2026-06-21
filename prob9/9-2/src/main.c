/* 
実行結果の例を参考にして、長さ5の整数型の配列変数aに、すべての成分に0から100の乱数の値を代入して表示し、以下の条件を満たす数値を表示するプログラム

・5つの整数の値は、main巻数の中でローカルな配列変数に代入すること。
・配列の値の表示・値を2倍する処理にはそれぞれ専用の関数を用意すること。
・前述の関数の引数は、すべて整数型のポインタを用いる事。
 */

/* インクルードファイル */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* マクロ定義 */
#define ARRAY_NUM (5) /* 配列の要素数 */

/* プロトタイプ宣言 */
void random_number(int *p, int size);
void double_ramdom_number(int *p, int size);

int main() {
int i;
int a[ARRAY_NUM];

srand((unsigned)time(NULL));
for(i = 0; i < ARRAY_NUM; i++) {
  a[i] = rand() % 100 + 1;
}

printf("発生した乱数: \n");
random_number(a,ARRAY_NUM);
printf("\n");

double_ramdom_number(a,ARRAY_NUM);
printf("2倍した値; \n");
random_number(a,ARRAY_NUM);

/* 終了 */
  return 0;
}

void random_number(int *p, int size) {
int i;

if(p == NULL) {
  return;
}

for (i = 0; i < size; i++){
  printf("a[%d] = %d ",i , *(p + i));
  printf("\n");
}
}

void double_ramdom_number(int *p, int size) {
int i;

if(p ==NULL) {
  return;
}

for ( i = 0; i < size; i++){
  *(p + i) = *(p + i) * 2;
}

}