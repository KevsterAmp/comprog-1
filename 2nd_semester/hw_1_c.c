#include <conio.h>
#include <stdio.h>

void YOU(int *x, int y) {
    static int z = 0;
    y = *x++;
    *x = y + 8;
    z = *x + y;
    printf("YOU: %d %d %d\n", *x, y, z);
}

void ME(int x, int *y) {
    *y = *y + x++;
    x += *y;
    printf("ME: %d %d\n", x, *y);
}

void main() {
    int a = 12, b = 23;
    YOU(&a, b);
    printf("MAIN: %d %d\n", a, b);
    ME(b, &a);
    printf("MAIN: %d %d\n", a, b);
    ME(a, &b);
    printf("MAIN: %d %d\n", a, b);
    YOU(&b, a);
    printf("MAIN: %d %d\n", a, b);
}