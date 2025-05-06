#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    printf("INPUT char :");
    scanf("%s", str);

    printf("|%d|\n", strlen(str));
    return 0;
}