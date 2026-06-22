/* 

2つの整数型変数の「ポインタ（アドレス）」を受け取り、呼び出し元の変数の値を互いに入れ替える関数 void swap(int *x, int *y) を作成し、main 関数で定義した int a = 10, b = 20; の値が正しく入れ替わるプログラム

*/



#include <stdio.h>

/* プロトタイプ宣言 */
void swap(int *x,int *y);

int main() {
int a = 10;
int b = 20;

swap(&a,&b);

printf("main関数内 %d, %d",a,b); /* main関数内で値が変更されているかの確認 */

/* 終了 */
  return 0;
}

void swap(int *x,int *y) {
  int temp;

  temp = *x;
  *x = *y;
*y = temp;

printf("%d, %d\n",*x,*y);

}