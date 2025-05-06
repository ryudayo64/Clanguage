#include <stdio.h>

int main(void)
{
    int input;

    printf("PLEASE INPUT : ");
    scanf("%d", &input);

    if ((input % 4 == 0 || input % 400 == 0) && input % 100 != 0)
    {
        printf("URUU DOSHI DE ARU\n");
    }
    else
    {
        printf("URUU DOSHI DE NAI\n");
    }
    return 0;
}
