#include <stdio.h>

int max(int x, int y) { return x > y ? x : y; }
int main(void)
{
    int a, b, c;
    printf("PLEASE INPUT 3 INTEGER : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("MAX : %d\n", max(max(a, b), c));
}

// 簡潔バージョン
// #include <stdio.h>

// int main(void)
// {
//     int a, b, c, MAX;
//     printf("PLEASE INPUT 3 INTEGER : ");
//     scanf("%d %d %d", &a, &b, &c);

//     MAX = a;
//     if (b > MAX)
//         MAX = c;
//     if (c > MAX)
//         MAX = c;

//     printf("MAX : %d\n", MAX);
// }

// 冗長 初心者向け
// #include <stdio.h>

// int main(void)
// {
//     int a, b, c, MAX;
//     printf("PLEASE INPUT 3 INTEGER : ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b)
//     {
//         MAX = a;
//     }
//     else if (a == b)
//     {
//         MAX = a;
//     }
//     else
//     {
//         MAX = b;
//     }

//     if (c > MAX)
//     {
//         MAX = c;
//     }

//     printf("MAX : %d\n", MAX);
// }