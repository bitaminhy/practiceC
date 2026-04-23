/* ループを用いて、１から100までの数字を表示するプログラム。ただし、このとき、数は10ごとに改行する */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

int i ;
int num ;

for (i = 1; i <= 100; i++) {
  printf("%d",i) ;
  if(i % 10 == 0) {
    printf("\n") ;
  }
}

/* 終了 */
  return 0 ;
}