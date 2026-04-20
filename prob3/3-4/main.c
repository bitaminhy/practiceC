/*  ある年が、閏年かどうかを判定するプログラム */

/* インクルードファイル */
#include <stdio.h>

int main() {

int year ; /* 西暦(値)を入れる変数 */

/* 西暦入力 */
printf("西暦：") ;
scanf("%d",&year) ;

/* 閏年かの判断 */
if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
  printf("閏年です。") ;
} else {
  printf("閏年ではありません。") ;
}

/* 終了 */
return 0 ;
}


