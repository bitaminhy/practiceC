/* 

第3問と同じ配列 int arr[3] = {10, 20, 30}; を使います。今度は + i をするのではなく、ループが回るたびにポインタ変数自体を1ずつ進める（ p++ ）ことで、すべての要素の値を表示するプログラム

*/

#include <stdio.h>


int main() {
int arr[3] = {10,20,30};
int i;

int *p = arr;

for (i = 0; i < 3; i++) {

printf("arr[%d] = %d  ",i ,*p);
p++;
}


/* 終了 */
  return 0;
}