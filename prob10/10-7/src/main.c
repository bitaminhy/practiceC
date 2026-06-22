/* 

引数として配列のポインタを受け取って中身を表示する関数 void print_val(??? ptr) を作成します。この関数内で、誤って数値を書き換えるコード（ *ptr = 999; など）を書いたときに、コンパイルエラーとしてバグを検知できるように const キーワードを付与した正しい関数を作成

*/


#include <stdio.h>

void print_arr(const int *str);

int main() {
int num = 100;
print_arr(&num);

/* 終了 */
  return 0;
}

void print_arr(const int *str) {
  //*str = 900; このコメントアウトを外すと変更してはいけないのに変更しようとすることでコンパイルエラーがでる
  printf("値：%d",*str);
}