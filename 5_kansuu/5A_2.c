#include <stdio.h>
float ave(int a, int b, int c)
{
    return (a + b + c) / 3;
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

    printf("GOKEI=%f\n", ave(eigo, suugaku, rika));

    return 0;
} 