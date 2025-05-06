#include <stdio.h>

int main(void)
{
    int a, b;
    printf("PLEASE INPUT 2 INTEGER : ");
    scanf("%d %d", &a, &b);

    // なぜelse ifは中間に書かないといけないのか、elseは上のどの条件にも無い場合に処理されるから。そういう文法ルール
    if (a > b)
    {
        printf("BIG : %d\n", a);
    }
    else if (a == b)
    {
        printf("Same Number : %d %d \n", a,  b);
    }
    else
    {
        printf("BIG : %d\n", b);
    }
}