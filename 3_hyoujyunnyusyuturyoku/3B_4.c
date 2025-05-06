#include <stdio.h>

int main(void)
{
    int Xzahyou[3];
    int Yzahyou[3];
    int i = 1;
    int JUSHIN[2];

    while (i <= 3)
    {
        printf("PLEASE INPUT X%d Y%d : ", i, i);
        scanf("%d %d", &Xzahyou[i - 1], &Yzahyou[i - 1]);

        if (i == 3)
        {
            JUSHIN[0] = (Xzahyou[0] + Xzahyou[1] + Xzahyou[2]) / 3;
            JUSHIN[1] = (Yzahyou[0] + Yzahyou[1] + Yzahyou[2]) / 3;

            printf("JUSHIN X :%d , Y :%d", JUSHIN[0], JUSHIN[1]);
        }

        i++;
    }

    return 0;
}