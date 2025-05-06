#include <stdio.h>
int judgeleapyear(int seireki)
{

    if ((seireki % 4 == 0 || seireki % 400 == 0) && seireki % 100 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    int input;

    printf("PLEASE INPUT : ");
    scanf("%d", &input);

    if (judgeleapyear(input) == 1)
    {
        printf("URUU DOSHI DE ARU\n");
    }
    else
    {
        printf("URUU DOSHI DE NAI\n");
    };

    return 0;
}
