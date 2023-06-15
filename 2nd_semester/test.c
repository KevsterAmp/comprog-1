#include <stdio.h>
#include <conio.h>

struct MyStruct{ 
    int r;    
    int m;  
};

int main(void){  
    struct MyStruct MyArray[5];
    int x;

    for(x = 0; x < 5; x++) {
        MyArray[x].r = x;
        MyArray[x].m =  5 - x; 
    }

    for(x=0;x<5;x++) { 
        printf("%d \t %d \t %d\n", x, MyArray[x].m, MyArray[x].r);
    }

    getch(); 
} 
