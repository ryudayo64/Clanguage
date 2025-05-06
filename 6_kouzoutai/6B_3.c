#include <stdio.h>
#include <string.h>

int main(void)
{
    char seimei[100], sei[100], mei[100];

    printf("名前を入力してください: ");
    scanf("%s", seimei);
    printf("入力された名前: %s\n", seimei);

    for (int i = 0; i <= strlen(seimei); i++)
    {
        // ハイフンが見つかれば左側をseiに代入。
        if (seimei[i] == '-')
        {
            for (int j = 0; j < i; j++)
            {
                sei[j] = seimei[j];
            }
            sei[i] = '\0';

            int k = 0;

            for (int j = i + 1; j <= strlen(seimei); j++)
            {
                mei[k++] = seimei[j];
            }

            break;
        }
    }

    printf("%c.%c\n", sei[0], mei[0]);

    return 0;
}
