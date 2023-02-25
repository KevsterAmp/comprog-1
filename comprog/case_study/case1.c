#include <stdio.h>
/*An applicant will be accepted to the Jedi Knight Academy if he is at least 200 cm tall; age is between 21 and 25 inclusive, and a citizen of the Planet Endor. However, if the applicant is recommendee of Jedi Master Obi Wan, he is accepted automatically regardless of his height, age and citizenship. Write a program that would input the applicant’s height, age, citizenship code (1- citizen 0-not citizen) and recommendee’s code (1- recommended 0- not recommended) and then output whether the applicant is accepted or rejected. */
int main(void)
{
    int height, age, citizen, recommendee;
    printf("Greetings applicant, kindly input the following in INT only:\n");
    printf("height: ");
    scanf("%d", &height);
    printf("age: ");
    scanf("%d", &age);
    printf("Are you a citizen of Planet Endor?\n 1 - citizen \t 0 - not citizen\n");
    scanf("%d", &citizen);
    printf("Are you a recommendee of Jedi Master Obi Wan?\n 1 - recommended\t 0 - not recommended\n");
    scanf("%d", &recommendee);

    if (recommendee == 1)
        printf("You have been approved\n");
    else if (height >= 200 && age >= 21 && age <= 25 && citizen == 1)
        printf("You have been approved\n");
    else {
        printf("You are rejected\n");
    }
}