#include <stdio.h>
int main(void)
{
    int small = 0, large = 0, c;
    while ((c = getchar()) != '.')
    {
        if (c >= 'a' && c <= 'z')
        {
            small++;
            continue;
        }
        if (c >= 'A' && c <= 'Z')
        {
            large++;
        }
    }
    printf("\nSMALL=%d ", small);
    printf("\nLARGE=%d ", large);

    return 0;
}