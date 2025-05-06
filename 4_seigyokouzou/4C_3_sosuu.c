#include <stdio.h>

int main(void)
{
    int n, isPrime = 1;

    printf("INPUT: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            isPrime = 0;

    printf("%d HA SOSUU DE %s\n", n, isPrime ? "ARU" : "NAI");
    return 0;
}

// #include <stdio.h>
// int main(void)
// {
//     int input, sosuu = 0;

//     printf("PLEASE INPUT : ");
//     scanf("%d", &input);

//     // 素数を求める
//     // 入力された数字が1かその数自身でしか割り切れない場合：素数である。
//     //  例）入力：5, 2,3,4でそれぞれ割った時に余りが全て0であれば素数では無い
//     for (int i = 2; i < input; i++)
//     {
//         // 割り切れた場合
//         if (input % i == 0)
//         {
//             sosuu++;
//         }
//     }

//     if (sosuu == 0)
//     {
//         printf("%d HA SOSUU DE ARU\n", input);
//     }
//     else
//     {
//         printf("%d HA SOSUU DE NAI\n", input);
//     }
//     return 0;
// }
