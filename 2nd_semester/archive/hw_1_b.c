#include <stdio.h>
#include <conio.h>

int a = 11, b = 8, c = 25, x, y;

int COSC (int a, int b, int c) {
    a = a + b * c; 
    b = c % a; 
    c = b + c;

return c;
}

void INTE (int a, int *b, int *c) {
    a = a + *c; *b = a - *c; *c = a - *b;
    printf("INTE: %d %d %d\n", a, *b, *c);
    return;
}

void main() {
    INTE(a, &b, &c);
    printf("MAIN: %d %d %d\n", a, b, c);
    y = COSC(a, b, c);
    printf("MAIN: %d %d %d\n", a, b, y);
    x = COSC(a, b, y);
    printf("MAIN: %d %d %d\n", a, y, x);
    INTE(y, &b, &x);
    printf("MAIN: %d %d %d %d %d\n", a, b, c, x, y);
    INTE(b, &x, &y);
    printf("MAIN: %d %d %d %d %d\n", a, b, c, x, y );    
}