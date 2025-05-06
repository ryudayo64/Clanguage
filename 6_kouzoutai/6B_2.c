#include <stdio.h>

struct Student {
    int score;
    int diff;
};

int main(void)
{
    struct Student students[5];
    int sum = 0;
    int average;

    // 得点の入力と合計
    for (int i = 0; i < 5; i++) {
        scanf("%d", &students[i].score);
        sum += students[i].score;
    }

    average = sum / 5;

    // 差の計算と出力
    for (int i = 0; i < 5; i++) {
        students[i].diff = students[i].score - average;
        printf(" %d ", students[i].diff);
    }

    return 0;
}


// #include <stdio.h>
// int main(void)
// {
//     int score[5], sum = 0, average = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &score[i]);
//         sum += score[i];
//     }

//     average = sum / 5;

//     for (int i = 0; i < 5; i++)
//     {
//         printf(" %d ", score[i] - average);
//     }

//     return 0;
// }