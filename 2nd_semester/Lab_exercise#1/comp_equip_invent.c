#include <stdio.h>
#include <string.h>

struct equipment {
    char item_name[20];
    int item_no;
    char item_description[20];
    int unit_price;
    int avail_quantity;
};

struct user {
    char name[20];
    int type;
    int year;
    int month;
    int day;
};

struct equipment eqp[5];

int main(void) {
    // Equipment initialization
    strcpy(eqp[0].item_name, "keyboard");
    eqp[0].item_no = 1;
    strcpy(eqp[0].item_description, "a keyboard");
    eqp[0].unit_price = 90;

    strcpy(eqp[1].item_name, "mouse");
    eqp[1].item_no = 2;
    strcpy(eqp[1].item_description, "a mouse");
    eqp[1].unit_price = 50;

    strcpy(eqp[2].item_name, "monitor");
    eqp[2].item_no = 3;
    strcpy(eqp[2].item_description, "a monitor");
    eqp[2].unit_price = 200;

    strcpy(eqp[3].item_name, "cpu");
    eqp[3].item_no = 4;
    strcpy(eqp[3].item_description, "a cpu");
    eqp[3].unit_price = 300;

    strcpy(eqp[4].item_name, "ram");
    eqp[4].item_no = 5;
    strcpy(eqp[4].item_description, "a ram");
    eqp[4].unit_price = 100;

    // Initialize avail_quantity for all equipment
    for (int i = 0; i < 5; i++) {
        eqp[i].avail_quantity = 100;
    }

    struct user user_1;
    int item_no;

    // User input
    printf("Input name: ");
    fgets(user_1.name, sizeof(user_1.name), stdin);
    user_1.name[strcspn(user_1.name, "\n")] = '\0';  // Remove the trailing newline

    printf("Press 1 if you are a student and press 2 if you are a faculty teacher: ");
    scanf("%d", &user_1.type);

    printf("Enter today's date (year month day): ");
    scanf("%d %d %d", &user_1.year, &user_1.month, &user_1.day);

    while (1) {
        printf("\nEnter item number (1-5): ");
        scanf("%d", &item_no);

        if (item_no > 5 || item_no < 1) {
            printf("Invalid item number\n");
            continue;
        } 
        
        else {
            printf("Item name: %s\n", eqp[item_no - 1].item_name);
            printf("Item number: %d\n", eqp[item_no - 1].item_no);
            printf("Item description: %s\n", eqp[item_no - 1].item_description);
            printf("Item unit price: %d\n", eqp[item_no - 1].unit_price);
            printf("Item available quantity: %d\n", eqp[item_no - 1].avail_quantity);
            continue;
        }

    }

    return 0;
}
