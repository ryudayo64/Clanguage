#include <stdio.h>

int main()
{
    // 変数制限
    int a, b, add, sub, mul;
    float div;

    // 入力
    printf("PLEASE INPUT A B : ");
    scanf("%d%d", &a, &b);

    // 計算
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / (float)b;

    printf("A=%d       B=%d", a, b);
    printf("A+B=%d", add);
    printf("A-B=%d", sub);
    printf("A*B=%d", mul);
    printf("A/B=%.6f", div);

    return 0;
}