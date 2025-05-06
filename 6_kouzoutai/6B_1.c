#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100], rev[100];
    printf("PLEASE INPUT NAME: ");
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        // str[5-1-0] = str[4];
        // str[5-1-1] = str[3];
        // str[5-1-2] = str[2];
        // str[5-1-3] = str[1];
        // str[5-1-4] = str[0];
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    printf("INVERSE: %s\n", rev);
    return 0;
}

// #include <stdio.h>

// int main(void)
// {

//     char BeforeReverse[100], AfterReverse[100];

//     int n = 0;

//     printf("PLEASE INPUT NAME:");

//     scanf("%s", BeforeReverse);
//     // ここからここまで、範囲を把握する。
//     // 1番最後の配列要素をAfterReverseにスタックしていく。
//     while (BeforeReverse[n] != '\0')
//     {
//         n++;
//     }

//     // 配列beforeを逆順で取り出す。  5回入力▶︎0~4の要素数を使用する。
//     for (int i = n; i >= 0; i--)
//     {
//         AfterReverse[n - i] = BeforeReverse[i - 1];
//     }

//     AfterReverse[n] = '\0';
//     printf("INVERSE=%s\n", AfterReverse);
//     return 0;
// }