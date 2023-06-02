#include <stdio.h>

int main() {
    int v1, v2, v3, v4, v5, *p1, *p2, *p3, *p4;
    printf("address of v1: %p\n", &v1);
    printf("address of v2: %p\n", &v2);
    printf("address of v3: %p\n", &v3);
    printf("address of v4: %p\n", &v4);
    printf("address of v5: %p\n", &v5);
    v3=20;
    
    v4=10;
    
    p3=&v4;
    
    p1=&v1;
    
    v1= *p3 + 2;
    
    p2=&v3;
    
    v2= *p2 + *p3;
    
    p4=&v2;
    v5= 100 + 103 + 104 + 101;

    printf("v1: %d\n", v1);
    printf("v2: %d\n", v2);
    printf("v3: %d\n", v3);
    printf("v4: %d\n", v4);
    printf("v5: %d\n", v5);
    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);
    printf("p3: %p\n", p3);
    printf("p4: %p\n", p4);


}
