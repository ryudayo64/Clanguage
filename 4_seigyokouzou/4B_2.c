#include <stdio.h>

int main(void)
{
    int input;

    printf("PLEASE INPUT : ");
    scanf("%d", &input);

    if (input >= 0 && input <= 9)
    {
        printf("OK\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
