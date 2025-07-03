/* インクルードファイル */
#include <stdio.h>

/*  マクロ定義 */
#define MEMBER 10 /* 人数を示すdefine */


/*  メイン関数 */
/* 自身の点数が平均点より高いか低いか同点かを示すプログラム */
int main() {

/* テストの結果を配列で定義 */
int result[] = {65,95,55,75,45,86,48,88,65,0};

/* 自分の点数を格納する変数 */
int num;
/* for文ようの変数 */
int i;
/* 合計点を格納する変数 */
int total;
/* 平均点を格納する変数 */
int ave;

/* 点数に入力を促す */
printf("あなたの点数を入力してください。\n");
scanf("%d",&num);
/* 配列の最後に自身の点数を代入 */
result[MEMBER-1] = num;

/* 配列を繰り返し足していく　合計点を人数で割って平均点を算出 */
for(i = 0; i < MEMBER;i++) {
  total += result[i];
  ave = total / MEMBER;
}

/* 合計点と平均点の表示 */
printf("合計点は%d点です。\n",total);
printf("平均点は%d点です。\n",ave);

/* 自身の点数が平均点と比較してどうだったかを表示する処理 */
if(ave < num) {
  printf("私の点数は%d点で平均点より高かったです。\n",num);
} 
else if(ave > num) {
  printf("私の点数は%d点で平均点より低かったです。\n",num);
} 
else {
  printf("私の点数は%d点で平均点です。\n",num);
}
/* 終了 */
  return 0;
}
