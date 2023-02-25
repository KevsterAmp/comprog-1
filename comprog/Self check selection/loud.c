#include <stdio.h>

int main(void)
{
    int dec;
    printf("Input decibels: ");
    scanf("%d", &dec);

    if (dec <= 50)
        printf("The loudness type is Quite\n");
    else if (dec <= 70)
        printf("The loudness type is Intrusive\n");
    else if (dec <= 90)
        printf("The loudness type is Annoying\n");
    else if (dec <= 110)
        printf("The loudness type is Very Annoying\n");
    else 
        printf("The loudness type is Uncomfortable\n");
}