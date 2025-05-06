#include <stdio.h>
#include <string.h>

struct meibo
{
    char name[100];
    char address[100];
};

int main(void)
{
    struct meibo h[5];
    char search[100];

    for (int i = 0; i < 5; i++)
    {
        printf("human%d name address : ", i);
        scanf("%s %s", h[i].name, h[i].address);
    }

    printf("search : ");
    // 配列宣言した際にアドレス確保しているので&searchではなくsearchだけで良い！
    scanf("%s", search);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(search, h[i].name) == 0)
        {
            printf("address : %s \n", h[i].address);
            break;
        }
    }

    return 0;
}
