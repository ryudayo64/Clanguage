#include <stdio.h>

int main(void)
{

    int i, j;

    // iが9になるまでループ
    for (i = 0; i <= 9; i++)
    {
        // iが0の時、それ以外の時
        i == 0 ? printf("|🔸 |") : printf("|%3d|", i);

        for (j = 1; j <= 9; j++)
        {
            i == 0 ? printf("%3d|", j) : printf("%3d|", i * j);
        }
        printf("\n---------------------------------------\n");
        printf("\n");
    }
}