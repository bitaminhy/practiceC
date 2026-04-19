/* 入力した適当な値で四則演算を行うコード */

/* インクルードファイル */
#include <stdio.h>

int main() {

/* 変数宣言 */
int a ;
int b ;

/* 値の入力 */
printf("a = ") ;
scanf("%d",&a) ;
printf("b = ") ;
scanf("%d",&b) ;
printf("\n") ;

/* 四則演算 */
printf("%d + %d = %d\n",a,b,a+b) ;
printf("%d - %d = %d\n",a,b,a-b) ;
printf("%d * %d = %d\n",a,b,a*b) ;
printf("%d %% %d = %d\n",a,b,a%b) ;
printf("%d / %d = %d\n",a,b,a/b) ;

/* 終了 */
  return 0 ;
}

