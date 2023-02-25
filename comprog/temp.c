#include <stdio.h>

int main(void) {
    int x, input, pos, neg;
    char rep;

    //do while loop para marepeat yung process
    do {
        printf("\nStarting new array....\n");
        printf("What is the size of the array? ");
        scanf("%d", &x);

        //give value to variable inside the loop para magreset pagnagloop
        int arr[x];
        pos = 0;
        neg = 0;

        //loop allocating the array 'arr'
        for (int i = 0; i < x; i++) {
            printf("Input either a positive or a negative number: ");
            scanf("%d", &input);

            //assigning the input to the array index
            arr[i] = input;

            //pos counter adds when inputted int is positive
            if (input > 0) {
                pos++;
            }
            
            //neg counter adds when inputted int is negative
            else if (input < 0) {
                neg++;
            }
        }

        //loop to print the values inside the array 'arr'
        printf("The array is: ");
        for (int i = 0; i < x; i++) {
            printf("%d ", arr[i]);
        }

        //prints the total number of positive and negative number via pos and neg counter
        printf("\nThe total number of positive integers in the array is: %d\n", pos);
        printf("The total number of negative integers in the array is: %d\n", neg);

        //input for repeating or stopping the program
        printf("Repeat the Process? (y/n): ");
        scanf(" %c", &rep);
    }
    //if inputted 'n' stop the program
    while (rep != 'n');
    printf("Ending program....\n");
}