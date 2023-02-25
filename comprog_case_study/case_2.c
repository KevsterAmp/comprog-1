#include <stdio.h>

int main() {
    int time; 
    char repeat; 
    do {
        printf("Enter time in seconds: ");
        scanf("%d", &time);

        // check if input is non-negative
        if (time >= 0) 
        {
            //calculating distance from origin
            int temp = time /4;
            int distance = time - (temp * 2);
            printf("Distance from origin: %d centimeters\n", distance);
        } 
        else // checks when the user add a negative integer
        {
            printf("Invalid input, please enter a non-negative integer\n");
        }
        printf("Do you want to repeat the process? (y/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y');

    return 0;
}
