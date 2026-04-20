/* 
１から100までの数値を乱数で発生させて表示し、以下の処理を行いなさい。
82の倍数であるなら、”2の倍数です。”と表示
3の倍数であるなら、”3の倍数です。”と表示
ただし、2の倍数でもあり、3の倍数でもある場合は、”2と3の公倍数です。”と表示。
するコード
 */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int point ;
srand((unsigned)time(NULL)) ;

/* 乱数を取得 */
point = rand() % 100 + 1 ;

printf("点数%d\n",point) ;
/* 取得した値で表示内容を変える */
if ((( point % 2) == 0) && (point <= 50)) {
  printf("50以下の偶数です。") ;
}
else if (point <= 50) {
  printf("50以下です") ;
}
else if (( point % 2) == 0) {
  printf("偶数です") ;
}
else {
  printf("それ以外！！") ;
}
/* 終了 */
return 0 ;
}


