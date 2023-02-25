#include <stdio.h>

int main(void) {
    int day, gift = 0, total_gifts = 0;

    printf("day\tgifts\ttotal gifts\n");
    
    for (day = 1; day <=12; day++) {
        gift += day;
        total_gifts += gift;
        printf("%d\t%d\t%d\n", day, gift, total_gifts);
    }
}