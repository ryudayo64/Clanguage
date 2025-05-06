#include <stdio.h>
int main(void)
{

    char KOMOJI;
    printf("PLEASE INPUT KOMOJI : ");
    scanf("%c", &KOMOJI);
    putchar(KOMOJI + ('A' - 'a'));
    
    return 0 ;
}