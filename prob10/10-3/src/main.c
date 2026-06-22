/* 

要素数3の配列 int arr[3] = {10, 20, 30}; があります。ループ（for 文など）を使い、配列の先頭を指すポインタ p に i を足し算するポインタ演算（ *(p + i) の形）を使って、すべての要素を画面に表示するプログラムを作成してください。※ arr[i] という表記は禁止

*/



#include <stdio.h>

int main() {
int arr[3] = {10,20,30};
int i;

int *p = NULL;

p = arr;

for (i = 0; i < 3; i++) {

printf("arr[%d] = %d  ",i,*(p + i));

}
 
/* 終了 */
  return 0;
}