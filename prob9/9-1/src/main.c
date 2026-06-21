#include <stdio.h>

/* 
下記のコードはポインタで配列の数字を順番に表示するプログラムである
下記のソースコードを改造して配列の数字を逆順に並べるようにする
※変えてよい部分は、ポインタ変数pへの操作の部分のみとする。
*/
#if 0
int main(){
    //  サイズSIZEの配列を用意する。
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL;
    int i;
    p = nums; //  pにnumsのアドレスを入力
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p++;   //  p2のアドレスをインクリメント
    }
	printf("\n");
    return 0;
}
#endif


#include <stdio.h>

int main() {
//  サイズSIZEの配列を用意する。
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL;
    int i;
    p = &nums[4]; //  pにnumsのアドレスを入力
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p--;   //  p2のアドレスをインクリメント
    }
	printf("\n");


/* 終了 */
return 0;

}