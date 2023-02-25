#include <stdio.h>
#include <conio.h>

int main(void)
{
    int n;
    printf("Input number: ");
    scanf("%d", &n);
    if (n < 0){
        printf("%d is negative\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    
    else {
        printf("%d is positive\n", n);
    }
}