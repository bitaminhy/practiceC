/* 入力した値を計算してくれるプログラム*/

/* 自作インクルードファイル */
#include "calc.h"

/* 処理開始 */
int main () {

int num1; /* 四則演算用の一つ目の値 */
int num2; /* 四則演算用の一つ目の値 */
int sisoku_num; /* 文字列として入力された値を正数に直す */
char sisoku_str; /* 四則演算を選択するようの変数 */
int result; /* 計算結果用変数 */
int remainder; /* 割り算の余り */


do {

  result = 0; /* 計算結果初期化 */
  remainder = 0; /* 余り初期化 */

/* 実施する四則演算を選択 */
printf("実施する四則演算を番号から選んでください。\n");
printf("終了する場合は、q を押してください。\n");
printf("1.足し算\n");
printf("2.引き算\n");
printf("3.掛け算\n");
printf("4.割り算\n");
printf("q.終了\n");

/* 実施する四則演算の番号を入力 */
scanf("%s",&sisoku_str);

/* 文字列として入力された値を正数に戻す */
switch (sisoku_str)
{
case '1':
case '2':
case '3':
case '4':
  sisoku_num = sisoku_str - '0';
  break;
default:
  break;
}

 /* 入力された値ごとに四則演算開始 */
switch (sisoku_num)
{
case 1:
  /* 足し算 */
  printf("値1：");
  scanf("%d",&num1);
  printf("値2：");
  scanf("%d",&num2);
  result =  add(num1,num2);
  printf("%d + %d = %d\n",num1,num2,result);
  break;
case 2:
  /* 引き算 */
  printf("値1：");
  scanf("%d",&num1);
  printf("値2：");
  scanf("%d",&num2);
  result = dec(num1,num2);
  printf("%d - %d = %d\n",num1,num2,result);
  break;
case 3:
  /* 掛け算 */
  printf("値1：");
  scanf("%d",&num1);
  printf("値2：");
  scanf("%d",&num2);
  result = mul(num1,num2);
  printf("%d * %d = %d\n",num1,num2,result);
  break;
case 4:
  /* 割り算 */
printf("値1：");
  scanf("%d",&num1);
  printf("値2：");
  scanf("%d",&num2);
  result = divis(num1,num2);
  remainder = rema(num1,num2);
  printf("%d / %d = %d・・・%d\n",num1,num2,result,remainder);
  break;
default:
   /* 処理なし */
  break;
}

} while(sisoku_num == 1
      ||sisoku_num == 2
      ||sisoku_num == 3
      ||sisoku_num == 4);

/* 終了 */
  return 0;
}