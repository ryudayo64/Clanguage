#include <stdio.h>

int main(void)
{
    int a, value;
    printf("PLEASE INPUT INTEGER : ");
    scanf("%d", &a);

    if (a < 0)
    {
        value = a * (-1);
    }
    else
    {
        value = a;
    }
     printf("|a|= %d\n", value);
}