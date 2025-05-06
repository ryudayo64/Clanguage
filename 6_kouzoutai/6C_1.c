#include <stdio.h>
int main(void)
{

    int farray[20], sarray[20], plus[20];

    printf("farray input 20 ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &farray[i]);
    }

    printf("sarray input 20 ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &sarray[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        plus[i] = farray[i] + sarray[i];
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", plus[i]);
    }

    return 0;
}
