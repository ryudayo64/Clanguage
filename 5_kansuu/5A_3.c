#include <stdio.h>

int x = 0;
int total(int a)
{
    x += a;
    return x;
}

int main(void)
{
    int n = 0, input, value;

    while (n != 10)
    {
        printf("PLEASE INPUT :");
        scanf("%d", &input);
        total(input);
        n++;
    }

    printf("total:%d\n", x);
    return 0;
}