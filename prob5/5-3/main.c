/* 
1.長さ5のint型の配列を作成する。
2.1.で生成した配列の各要素に1から10までの乱数を代入する。
3.配列の値の合計値と、平均値を表示する。(小数点以下は切り捨てる)
4.平均値よりも大きい数を表示する。
5.平均値よりも小さい数を表示する。
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DATA (5)

int main() {
srand((unsigned)time(NULL));

int length[NUM_DATA];
int i;
int sum = 0;
int ave = 0;

for(i = 0; i < NUM_DATA; i++) {
  length[i] = rand() % 10 + 1;
}
 
 for(i = 0; i < NUM_DATA; i++) {
  sum = sum + length[i];
 }
 printf("合計値：%d",sum);
 ave = (sum / NUM_DATA) ;
printf("平均値：%d",ave);

printf("平均値より大きい値:");
for(i =0;i < NUM_DATA;i++) {
if(ave < length[i]) {
  printf("%d ",length[i]);
}
}
printf("平均値より小さい値:");
for(i = 0; i < NUM_DATA; i++) {
if(ave > length[i]) {
  printf("%d ",length[i]);
}
}
 
/* 終了 */
  return 0 ;
}