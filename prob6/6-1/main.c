/* キーボードから２つの整数の値を入力し、その和を求める
二つの数の差を求める
 */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int x, int y);
int deg(int x, int y);

int main () {

int a;
int b;
int sum_result;
int deg_result;

printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
sum_result = add(a,b);
printf("%d + %d = %d",a,b,sum_result);
printf("\n");
deg_result = deg(a,b);
printf("%d - %d = %d",a,b,deg_result);

/* 終了 */
  return 0;
}

 /* 足し算をする関数 */
int add(int x, int y) {
  /* 足し算した結果を返す */
  return x + y;
}

int deg(int x, int y) {
  /* 足し算した結果を返す */
  return x - y;
}