#include <stdio.h>

int main(void)
{

    int tentchi[3][3] = {
        // j 0 , 1  ,2 i
        {1, 2, 3},  //  0
        {4, 5, 6},  //  1
        {7, 8, 9}}; //  2
    int afterTentchi[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            afterTentchi[j][i] = tentchi[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", afterTentchi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
