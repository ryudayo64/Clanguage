#include <stdio.h>

int main(void)
{
    int eigo, suugaku, rika, input, ave;

    printf("PLEASE INPUT EIGO : ");
    scanf("%d", &eigo);
    printf("PLEASE INPUT SUUGAKU : ");
    scanf("%d", &suugaku);
    printf("PLEASE INPUT RIKA: ");
    scanf("%d", &rika);

    ave = (eigo + suugaku + rika) / 3;
    if (ave < 100)
    {
        if (ave >= 80 && ave <= 100)
        {
            printf("HEIKIN=%d\n", ave);
            printf("HYOUKA=A\n");
        }
        else if (ave >= 70 && ave <= 79)
        {
            printf("HEIKIN=%d\n", ave);
            printf("HYOUKA=B\n");
        }
        else if (ave >= 60 && ave <= 69)
        {
            printf("HEIKIN=%d\n", ave);
            printf("HYOUKA=C\n");
        }
        else
        {
            printf("HEIKIN=%d\n", ave);
            printf("HYOUKA=D\n");
        }
    }
    else
    {
        printf("ERROR : MAX TENSUU 100\n");
    }

    return 0;
}
