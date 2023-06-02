#include <stdio.h>

int main(void)
{
    float sec; 
    printf("Enter time in seconds:\t");
    scanf("%f", &sec);
    printf("Distance from origin = %.1f", sec/2);
}