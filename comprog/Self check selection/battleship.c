#include <stdio.h>

int main(void)
{
    char tite;
    printf("Input class id\n");
    scanf("%c", &tite);

    if (tite == 'B' || tite == 'b')
        printf("The warship is Battleship\n");

    else if (tite == 'C' || tite =='c')
        printf("The warship is Cruiser\n");
    
    else if (tite == 'D' || tite == 'd')
        printf("The warship is Destroyer\n");

    else if (tite == 'F' || tite == 'f')
        printf("The warship is Trigate\n");
    
    else 
        printf("Not a warship\n");
}

