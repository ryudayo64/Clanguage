#include <stdio.h>

int main(void)
{
    char input;

    do
    {
        printf("PLEASE INPUT : ");
        scanf("%c", &input);

        if (input >= '0' && input <= '9')
        {
            printf("SUUJI\n");
        }
        else if (input >= 'a' && input <= 'z')
        {
            printf("KOMOJI\n");
        }
        else if (input >= 'A' && input <= 'Z')
        {
            printf("OOMOJI\n");
        }
        else
        {
            printf("KIGOU\n");
        }
    } while (input != 0);
    return 0;
}
