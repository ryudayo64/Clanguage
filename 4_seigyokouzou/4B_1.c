#include <stdio.h>

int main(void)
{
    int i = 0, number, MAX, MIN;

    printf("PLEASE INPUT INTEGER : ");
    scanf("%d", &number);
    MAX = MIN = number; // 最初の入力で初期化
    i++;

    while (i < 10)
    {
        printf("PLEASE INPUT INTEGER : ");
        scanf("%d", &number);

        if (number > MAX)
            MAX = number;
        if (number < MIN)
            MIN = number;

        i++;
    }

    printf("MAX:%d, MIN:%d\n", MAX, MIN);

    return 0;
}
