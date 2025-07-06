#include <stdio.h>
#include "kuku.h"

void kuku() {
/* 九九表の表示 */
int i;
int j;

for (i = 1; i < NUM; i ++) {
  printf("%d  |",i);
  for (j = 1; j < NUM; j++){
    printf("%3d",(i * j));
  }
  printf("\n");
}
}