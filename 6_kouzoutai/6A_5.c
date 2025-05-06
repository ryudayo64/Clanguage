#include <stdio.h>

struct human
{
    int manNumber;
    char name[100];//⭕️
    // char name; ❌
    //  一文字は1要素として扱われるため、複数の文字列を代入するには配列にしないと以下のように怒られる
    // format specifies type 'char *' but the argument has type 'char' [-Wformat]gcc
};

int main(void)
{

    // 構造体 5つ用意
    struct human h[5];
    int searchManNumber = 0;

    // 5回入力
    for (int i = 0; i < 5; i++)
    {
        printf("PLEASE INPUT NUMBER:");
        scanf("%d", &h[i].manNumber);
        printf("PLEASE INPUT ADDRESS:");
        scanf("%s", &h[i].name);
    }

    printf("PLEASE INPUT SEARCH NUMBER:");
    scanf("%d", &searchManNumber);

    // 検索結果表示
    for (int i = 0; i < 5; i++)
    {
        if (searchManNumber == h[i].manNumber)
        {
            printf("ADDRESS=%s\n", h[i].name);
        }
    }

    return 0;
}