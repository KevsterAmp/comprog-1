#include <stdio.h>
#include <conio.h>

int main(void) {
    int a, b=0;
    static int c[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //1.a
    int C[12] = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34};
    //1.b
    char point[] = {"NORTH\0"};
    //1.c
    char letters[4] = {'N', 'S', 'E', 'W'};
    // 2. a = 30
    // 2. b = 25

     for (a=0; a<10; a++) 
        if ((a % 2) == 0) 
            b += c[a];
        
        
    printf("%d\n", b);
    printf("%s", point);
    
}

// 2. a = 30A
// 2. b = 25

