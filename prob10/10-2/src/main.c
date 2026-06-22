/* 
2つの変数 int a = 10, b = 20; があります。1つのポインタ変数 ptr を用意し、最初は a の値を、次に ptr の指す先を切り替えて b の値を、それぞれ ptr 経由で画面に表示するプログラム
*/

/* インクルード */
#include <stdio.h>


int main() {
int a = 10;
int b = 20;

int *ptr = NULL;

ptr = &a;
printf("%d\n",*ptr);

ptr = &b;
printf("%d",*ptr);


/* 終了 */
  return 0;
}