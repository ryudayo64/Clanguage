#include <stdio.h>

struct seiseki
{
    int eigo;
    int suugaku;
    int rika;
    float kojinAverage;
};

int main(void)
{
    struct seiseki s[5];

    int eigoSum = 0, suugakuSum = 0, rikaSum = 0;

    // 得点の入力と合計
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d %d", &s[i].eigo, &s[i].suugaku, &s[i].rika);
        s[i].kojinAverage = (s[i].eigo + s[i].suugaku + s[i].rika) / 3.0;
        eigoSum += s[i].eigo;
        suugakuSum += s[i].suugaku;
        rikaSum += s[i].rika;
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%.2f ", s[i].kojinAverage);
    }

    printf(" %.1f %.1f %.1f ", eigoSum / 5.0, suugakuSum / 5.0, rikaSum / 5.0);
    return 0;
}
