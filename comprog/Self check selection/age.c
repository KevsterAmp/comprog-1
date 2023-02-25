/* Write a program that will determine and print whether a person is a child, a teenager or an adult using age as input. Assume that
 a child is from  0 – 12 years old; a teenager is from 13 – 19 years old and adult is from 20 and above. */

 #include <stdio.h>

 int main(void)
 {
    int age;
    printf("Please input age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12)
        printf("The person is a child\n");

    else if (age >= 13 && age <= 19)
        printf("The person is a teenager\n");
        
    else 
        printf("The person is an adult\n");
 }