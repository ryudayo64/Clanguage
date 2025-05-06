#include <stdio.h>
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main(void)
{
    int eigo, suugaku, rika;
    printf("PLEASE INPUT EIGO :");
    scanf("%d", &eigo);
    printf("PLEASE INPUT SUUGAKU :");
    scanf("%d", &suugaku);
    printf("PLEASE INPUT RIKA :");
    scanf("%d", &rika);

    printf("GOKEI=%d\n", sum(eigo, suugaku, rika));

    return 0;
}