#include <stdio.h>

int main(void) {
    int x = 5;
    int *y = *x; 
    printf("x = %d", *y);
}