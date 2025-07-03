/* インクルードファイル */
#include <stdio.h>

/* マクロ定義 */
#define NUM 10 /* 九九表の最大値を示すdefine 9まで表示するために10*/

/* メイン関数 */
int main() {
/* for分用の変数 */
int i;
int j;

printf("   | 1  2  3  4  5  6  7  8  9\n");
printf("---+---------------------------\n");

/* 九九表の表示 */
for (i = 1; i < NUM; i ++) {
  printf("%d  |",i);
  for (j = 1; j < NUM; j++){
    printf("%3d",(i * j));
  }
  printf("\n");
}
return 0;
}