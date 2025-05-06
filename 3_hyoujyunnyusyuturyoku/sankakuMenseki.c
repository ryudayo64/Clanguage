// 三角形の底辺と高さを標準入力から入力して、面積を計算して、結果を標準出力へ出力してください。
#include <stdio.h>

int main(void)
{
    float a, b, value;

    printf("底辺: ");
    scanf("%f", &a);
    printf("高さ: ");
    scanf("%f", &b);

    value = a * b / 2;

    printf("三角形の面積: %.2f\n", value);

    return 0;
}
