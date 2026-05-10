/* キーボードから入力した2つの平面ベクトルの間の距離を求めるプログラム */


#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1;
    double x2, y2;
    double distance;

    /* 1つ目のベクトル入力 */
    printf("1つ目のベクトルのX:");
    scanf("%lf", &x1);

    printf("1つ目のベクトルのY:");
    scanf("%lf", &y1);

    /* 2つ目のベクトル入力 */
    printf("2つ目のベクトルのX:");
    scanf("%lf", &x2);

    printf("2つ目のベクトルのY:");
    scanf("%lf", &y2);

    /* 距離計算 */
    distance = sqrt((x2 - x1) * (x2 - x1)
                  + (y2 - y1) * (y2 - y1));

    /* 結果表示 */
    printf("(%f,%f)と(%f,%f)の距離は%.14fです。\n",
           x1, y1, x2, y2, distance);

    return 0;
}