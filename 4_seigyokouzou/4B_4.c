#include <stdio.h>

int main(void)
{

    char c;
    switch (c = getchar())
    {
    case 'a':
    case 'i':
    case 'u':
    case 'e':
    case 'o':
        printf("%c\n", c - ('a' - 'A'));
        break;
    default:
        printf("%c\n", c);
        break;
    }
}
