#include <stdio.h>

int main(void)
{
    int a, b, number;

    do
    {
        printf("PLEASE INPUT INTEGER① : ");
        scanf("%d", &a);
        printf("PLEASE INPUT INTEGER② : ");
        scanf("%d", &b);
        printf("PLEASE INPUT NUMBER(1:+,2:-,3:*,4:/,9:END): ");
        scanf("%d", &number);

        switch (number)
        {
        case 1:
            printf("RESULT a + b: %d\n", a + b);
            break;
        case 2:

            printf("RESULT a - b: %d\n", a - b);
            break;
        case 3:

            printf("RESULT a * b: %d\n", a * b);
            break;
        case 4:

            printf("RESULT a / b: %d\n", a /  b);
            break;
        default:
            printf("RESULT END\n");
            break;
        }

    } while (number != 9);
}
