#include <stdio.h>

int main(void)
{
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int i;
    printf("Input month here: ");
    scanf("%i", &i);

    printf("The month is %s", month[i - 1]);
}