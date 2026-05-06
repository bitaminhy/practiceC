/* 1から10までの乱数を5回発生させ、表示するプログラム */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand((unsigned)time(NULL));
int i;
int num;

for(i = 0; i < 5; i++) {
  num = rand() % 10 + 1;
  printf("%d ",num);
}

/* 終了 */
  return 0;
}