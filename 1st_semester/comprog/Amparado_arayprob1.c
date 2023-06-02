#include <stdio.h>
#include <conio.h>

int main(void) {
    int answer[5];
    char name[10];
    float ave, sum = 0;

    //Ask and record what is the name of the user
    printf("What is your name? ");
    scanf("%s", name);

    //Loop that asks for answers 1 to 5
    for (int i = 0; i < 5; i++) {
        //Ask for answer and records it in answer array
        printf("Enter Answer #%d? ", i + 1);
        scanf("%d", &answer[i]);

        //Add answer[i] to sum if answer[i] is between 0 and 5
        if (answer[i] > 0 && answer[i] <= 5) {
        sum += answer[i];
        }
        
        //If answer[i] is not between 0 and 5, print out of range
        else {
            printf("Out of range!\n");
        }
    }

    //calculate average and print out the name, sum and ave
    ave = sum / 5;
    printf("\n%s, your total score is %0.f and your average is %.01f", name, sum, ave);
    getch();
}