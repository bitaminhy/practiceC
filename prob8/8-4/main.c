/* 1から10までの乱数同士の足し算を6回行うプログラム */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand((unsigned)time(NULL));
int a = 1,b = 1,i;

for(i=0;i <= 5;i++) {
  a = rand() % 10 + 1;
  b = rand() % 10 + 1;
printf("%d + %d = %d\n",a,b,a+b);
}

/* 終了 */
  return 0;
}