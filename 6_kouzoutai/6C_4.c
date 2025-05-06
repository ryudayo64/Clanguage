#include <stdio.h>

struct seiseki
{
    char name[100];
    int tokuten;
};

// グラフを表示する関数（戻り値なし、ポインタも使わない）
void bougurafu(int score)
{
    for (int i = 0; i < score; i++)
    {
        putchar('*'); // printf("*"); でもOK
    }
}

int main(void)
{
    struct seiseki s[5];

    // データ入力
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", s[i].name, &s[i].tokuten);
    }

    // グラフ出力
    for (int i = 0; i < 5; i++)
    {
        printf("%s %dTEN ", s[i].name, s[i].tokuten);
        bougurafu(s[i].tokuten); // アスタリスクを出力
        printf("\n");
    }

    return 0;
}
