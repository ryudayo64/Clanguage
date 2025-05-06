#include <stdio.h>

struct seiseki
{
    char name[100];
    int eigo;
    int suugaku;
    int rika;
    int heikin;
};

int main(void)
{

    struct seiseki x[5];

    int n = 0;
    while (n != 5)
    {
        printf("PLEASE INPUT | Name : eigo,suugaku,rika|");
        scanf("%s %d %d %d", x[n].name, &x[n].eigo, &x[n].suugaku, &x[n].rika);
        x[n].heikin = (x[n].eigo + x[n].suugaku + x[n].rika) / 3;
        n++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %d %d %d\n", x[i].name, x[i].eigo, x[i].suugaku, x[i].rika);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d\n", x[i].name, x[i].heikin);
    }

    return 0;
}

// 構造体を5回使って、