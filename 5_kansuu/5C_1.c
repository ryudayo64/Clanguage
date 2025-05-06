// 入力された値の型を調べる。
#include <stdio.h>
char typedistinct(char type)
{
    if (type >= '0' && type <= '9')
    {
        return 'N';
    }
    else if ((type >= 'a' && type <= 'z') || (type >= 'A' && type <= 'Z'))
    {
        return 'A';
    }
    else
    {
        return 'O';
    }
}
int main(void)
{
    char input;
    printf("PLEASE INPUT CHARACTER :");
    scanf("%c", &input);

    if (typedistinct(input) == 'N')
    {
        printf("SUUJI\n");
    }
    else if (typedistinct(input) == 'A')
    {
        printf("EIJI\n");
    }
    else
    {
        printf("SONOTA\n");
    }

    return 0;
}
