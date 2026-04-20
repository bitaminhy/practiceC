/* 
１から100までの数値を乱数で発生させて表示し、以下の処理を行いなさい。
80点以上なら”優”と表示。
80点未満、70点以上なら、”良”と表示。
70点未満、60点以上なら、”可”と表示。
60点未満なら、”不可”と表示。
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
if (point >= 80) {
  printf("優") ;
}
else if (point >= 70) {
  printf("良") ;
}
else if (point >= 60) {
  printf("可") ;
}
else {
  printf("不可") ;
}
/* 終了 */
return 0 ;
}


