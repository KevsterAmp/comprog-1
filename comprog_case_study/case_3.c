#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

//function that checks if string is a digit
int digit_check(char key[]);

int main(void)
{
    int time, h, m, poke, len_input = 4;
    char check[10], x, rep = '1';

    do {
        do{
            printf("Input time here: ");
            scanf("%s", check);
            len_input = strlen(check);
            poke = 0;

            time = atoi(check);
            h = time / 100;
            m = time % 100;
            
            //input validation, if the function returns 0, time is greater than 2400 or lower than 0, the minutes are greater than 60 loop and print invalid input 
            if (digit_check(check) == 0 || time > 2400 || m >= 60 || time < 0 || len_input !=4) {
                poke = 1;
                printf("Invalid input, try again\n");
            }
        }
        while (poke != 0);

        x = 'A';
        //if h which greater than 12 make it PM and minus 12 to make it a 12-hour format
        if (h >= 12) {
            h -= 12;

            if (time != 2400)
                x = 'P';
        }

        //if hours is 0 it means 12. 0004 = 12:04am
        if (h == 0)
            h = 12;
        
        //print the 12 hour format
        printf("%02d:%02d %cM\n", h, m, x);

        printf("Do you want to repeat the program (1 - yes, press any key to stop): ");
        getchar();
        scanf("%c", &rep);
    }
    while (rep == '1');
}

//function that checks a certain string if its all digits
int digit_check(char key[])
{
    for(int i = 0; i < strlen(key); i++)
    {
        if(isdigit(key[i])==0)
        {
            return 0;
        }
    }
    return 1;
} 