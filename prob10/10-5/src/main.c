/*

要素数5の配列の「2番目の要素（&arr[1]）」を指すポインタ p1 と、「最後（5番目）の要素（&arr[4]）」を指すポインタ p2 を作ります。この p2 から p1 を引き算（ p2 - p1 ）し、その結果を表示して、要素のインデックスの差が正しく計算できることを確認するプログラム

*/


#include <stdio.h>

#define ARRAY_NUM (5)

int main() {

int arry[ARRAY_NUM] = {10,20,30,40,50};

int *p1,*p2;

p1 = &arry[1];

p2 = &arry[4];

printf("%d",(*p2 - *p1));


  return 0;
}