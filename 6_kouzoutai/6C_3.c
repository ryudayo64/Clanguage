#include <stdio.h>

void printFont(char font[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", font[i][j] ? '#' : ' ');
        }
        printf("\n");
    }
}
int main(void)
{
    char A[5][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
    };
    char B[5][5] = {
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 0},
    };
    char C[5][5] = {
        {0, 1, 1, 1, 1},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 1, 1, 1, 1},
    };

    char input;
    printf("INPUT char (A〜C): ");
    scanf("%c", &input);

    switch (input)
    {
    case 'A':
        printFont(A);
        break;
    case 'B':
        printFont(B);
        break;
    case 'C':
        printFont(C);
        break;

    default:
        break;
    }
    return 0;
}