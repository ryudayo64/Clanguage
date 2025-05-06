#include <stdio.h>

int main(void)
{
    int n = 1, a;

    printf("PLEASE INPUT N: ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        n *= a - i;
    }
    printf("N! = : %d\n", n);
}
