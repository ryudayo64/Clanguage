#include <stdio.h>

int main(void)
{
    int sum = 0, number;

    do
    {
        printf("PLEASE INPUT INTEGER: ");
        scanf("%d", &number);

        sum = number + sum;
    } while (number != 0);

    printf("SUM = : %d\n", sum);
}
