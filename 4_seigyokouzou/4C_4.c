#include <stdio.h>

int main(void)
{
    int a, b;

    printf("INPUT A B:");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    printf("GCD=%d\n", a);

    return 0;
}
