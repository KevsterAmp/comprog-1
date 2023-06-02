#include <stdio.h>

int main(void)
{
    int time, h, m;
    char x[2] = "AM";
    
    printf("Input time here: ");
    scanf("%d", &time);

    h = time / 100;
    m = time % 100;

    //print invalid if time >= 2400 or time < 2400
    if (time >= 2400 || m >= 60 || time <= 0)
    {
        printf("Invalid Time!\n");
        return 0;
    }
    //if h which greater than 12 make it PM and minus 12 to make it a 12-hour format
    else if (h >= 12)
    {
    h -= 12;
    x[0] = 'P'; 
    }

    //if hours is 0 it means 12pm. 0004 = 12:04am
    if (h == 0)
        h = 12;
    
    //print the 12 hour format
    printf("%02d:%02d %s\n", h, m, x);
}