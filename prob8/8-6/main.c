/* -10から10までの乱数を4回発生させ、その数と、その絶対値を表示するプログラム */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand((unsigned)time(NULL));

  int i;
  int num;
  int min;
  int max;

  min = -10;
  max = 10;

  for(i = 1; i <= 4; i++) {
    num = min + rand() % (max - min + 1);
    printf("%dの値:%d 絶対値:%d  ",i,num,abs(num));
  }
  /* 終了 */
  return 0;
}