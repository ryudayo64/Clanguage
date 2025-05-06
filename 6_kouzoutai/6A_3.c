#include <stdio.h>

struct seiseki
{
    char name[100];
    int score;
};

int main(void)
{

    struct seiseki x[5];

    int n = 0;
    while (n != 5)
    {
        printf("PLEASE INPUT | Name : Score|");
        scanf("%s %d", x[n].name, &x[n].score);
        n++;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s , Score: %d\n", x[i].name, x[i].score);
    }

    return 0;
}

// 構造体を5回使って、