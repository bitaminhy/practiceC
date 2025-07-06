/* インクルードファイル */
#include <stdio.h>

/* マクロ定義 */
#define NUMBER 5 /* 割る数を示すdefine */

#define FALSE 0 /* while文のフラグ */
#define TRUE 1  /* while文のフラグ */


/* メイン関数 */
/* 入力値を５で割った余りによって処理を変えるプログラム */

int main() {

/* 入力値を格納する変数 */
  int num;
  /* 余りの結果を格納する変数 */
  int result; 
  /* while文の条件 */
  int flag = TRUE;

/* あまりの結果によって処理を変える処理 */
while(flag) {
  /* 入力処理 */
printf("整数を入力してください。\n");
scanf("%d",&num);
/* 入力された値を５で割って余りを算出 */
result =  (num % NUMBER);
  switch(result) {
  case 0:
  case 1:
  printf("あまりは%dです。\n",result);
  flag = FALSE;
  case 2:
  continue;
  case 3:
  printf("あまりは%dです。\n",result);
  continue;
  case 4:
  flag = FALSE;
  default:
  /* Nothing to do */
  }
}
return 0;
}















