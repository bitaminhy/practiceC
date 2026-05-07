/* 長さ5の整数型の配列変数aに、すべての成分に0から100の乱数の値を代入して表示し、以下の条件を満たす数値の個数を表示するプログラム */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
srand((unsigned)time(NULL));

int i;
int a[5];

int tw_count = 0;
int eig_count = 0;
int ten_count = 0;

for(i=0; i < 5; i++) {
  a[i] = rand() % 100 + 1;
  printf("a[%d] = %d ",i,a[i]);
}
printf("\n");

printf("20以上50以下の数: ");
for(i =0; i< 5; i++) {
  if(a[i] >= 20 && a[i] <= 50) {
     tw_count++;
  }
}
printf("%d個",tw_count);
printf("\n");

printf("80より大きい数: ");
for(i =0; i< 5; i++) {
  if(a[i] > 80) {
     eig_count++ ;
  }
}
printf("%d個",eig_count);
printf("\n");

printf("0以上10未満の数: ");
for(i =0; i< 5; i++) {
  if(a[i] >= 0 && a[i] < 10) {
     ten_count++ ;
  }
}
printf("%d個",ten_count);
printf("\n");


/* 終了 */
  return 0;
}