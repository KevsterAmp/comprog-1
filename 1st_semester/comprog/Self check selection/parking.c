#include <stdio.h>

int main(void)
{
    int fee;
    char type;
    printf("Input hours parked: ");
    scanf("%d", &fee);
    
    printf("Input vehicle type: ");
    scanf("\n%c", &type);

    if (type == 'C')
        printf("Your parking fee is %d\n", fee * 25);
    else if (type == 'B')
        printf("Your parking fee is %d\n", fee * 50);
    else if (type == 'T')
        printf("Your parking fee is %d\n", fee * 75);
    else
        printf("invalid input sir\n");
}