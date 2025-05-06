#include <stdio.h>

int main(void)
{

    char input[100], output[100];
    int n = 0;
    printf("PLEASE INPUT STRING:");
    scanf("%s", input);

    while (input[n] != '\0')
    {

        if (input[n] >= '0' && input[n] <= '9')
        {
            output[n] = '*';
        }
        else
        {
            output[n] = input[n];
        };
        n++;
    }

    output[n] = '\0'; // 文字列の終わりを明示
    printf("RESULT=%s\n", output);

    return 0;
}