/* 1から10までの乱数を5回発生させ、表示するとともに、その最大値と最小値も表示するプログラム */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
srand((unsigned)time(NULL));
int i;
int num;
int max;
int min;

max = 0;
min = 10;

for(i =0 ;i < 5; i++) {
  num = rand() % 10 + 1;
  printf("%d ",num);

  if(max < num) {
    max = num;
  }

  if(min > num){
    min = num;
 }
 }
printf("\n");
 printf("最大値：%d\n",max);
 printf("最小値：%d",min);

/* 終了 */
  return 0;
}