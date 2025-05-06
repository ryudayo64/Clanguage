#include <stdio.h>
int main()
{
    float MENSEKI, TEIHEN, TAKASA;

    printf("PLEASE INPUT TEIHEN : ");
    scanf("%f", &TEIHEN);

    printf("PLEASE INPUT TAKASA : ");
    scanf("%f", &TAKASA);

    MENSEKI = (TEIHEN * TAKASA) / 2;

    printf("MENSEKI = %.2f ", MENSEKI);

    return 0;
}