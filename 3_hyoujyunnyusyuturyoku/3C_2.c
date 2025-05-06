#include <stdio.h>

// main関数はエントリーポイント：プログラム開始地点
//  main関数は引数を使わない、整数を戻り値としている。

int main(void)
{
    float a, b, x;

    printf("PLEASE INPUT A B :");
    scanf("%f %f", &a, &b);

    x = -b / a;
    printf("x = %.2f \n", x);
}