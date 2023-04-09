#include <stdio.h>
#include <conio.h>

int x, y;

void HELLO (int *x, int *y) {
    *y = *x + *y;
    *x = *y + *y;
    printf("HELLO: %d %d\n", *x, *y);
    return;
}

void THANK_U(int x, int y) {
    y = ++y + x++;
    x = y;
    printf("THANKS U: %d %d\n", x, y);
    return;
}

int main() {
    int a = 10, b = -5;
    HELLO(&a, &b);
    printf("MAIN: %d %d\n", a, b);
    THANK_U(b,a);
    printf("MAIN: %d %d\n", a, b);
    HELLO(&b, &a);
    printf("MAIN: %d %d\n", a, b);
    THANK_U(b, a);
    printf("MAIN: %d %d\n", a, b);

}