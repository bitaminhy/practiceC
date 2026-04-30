/* forの二重ループを用いてローディングしているような画像を表示するプログラム */

/* インクルードファイル */
#include <stdio.h>
#include <stdlib.h>

int main() {

/* for文用の変数 */
int i ;
int j ;

/* 10行くり返す */
    for (i = 0; i < 10; i++)
    {
        /* 1行に10文字表示 */
        for (j = 0; j < 10; j++)
        {
            if (i == j)
            {
                printf("□");
            }
            else
            {
                printf("■");
            }
        }
        printf("\n");
    }

/* 終了 */
  return 0;
}