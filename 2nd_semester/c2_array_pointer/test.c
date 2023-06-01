#include<conio.h>
#include<stdio.h>
void main()
{ int *x, *y, z;
int bsit[10] = { 8, 17, 5, 12, 31, 10, 9, 3};
x = &bsit[4];
y= &bsit[8];
z = *x + *y;
printf("\n%d \t  %d \t %d\n", *x, *y, z);
printf("\n%d \t  \n", *x  -   *(bsit + 1));
printf("\n%d \t  \n",  *(bsit + 3)  *   z);
getch();
}
