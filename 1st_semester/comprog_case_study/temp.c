#include <stdio.h>

int main(void) {
    int sec, step = 0, x;

    printf("input time: ");
    scanf("%d", &sec);

    x = sec / 4;
    step = sec - (x * 2);
    printf("%d", step);
}