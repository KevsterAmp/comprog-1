#include <stdio.h>
#define MAX 50

// initalize structs
struct candy {
    int itemNo;
    char item_desc[20];
    float price;
};

void newrecord(int *total_records);
void change_price(int *total_records);
void display(int *total_records);
void input_buffer();

int main(void) {
    int choice, total_records = 0;
    FILE* file;

    file = fopen("candy.txt", "r+");

    // check if file exists
    if (file == NULL) {
        printf("File not found. Creating new file.\n\n\n");
        file = fopen("candy.txt", "w+"); // create file if not found
        if (file == NULL) {
            printf("Error creating file.\n");
            return 0;
        }
    } 

    else {
        struct candy temp;
        // get number of records
        while (fread(&temp, sizeof(struct candy), 1, file) == 1) {
            total_records++;
        }
    }
    fclose(file);

    while (1) {
        printf("Welcome to the Candy Store!\n\n");
        printf("1. Enter new record\n");
        printf("2. Change the price of the item number\n");
        printf("3. Display all records\n");
        printf("4. Exit\n");

        if (scanf("%d", &choice) != 1) {
            input_buffer();
            printf("Invalid input. Please try again.\n");
        } 
        
        else {
            switch (choice) {
                case 1:
                    newrecord(&total_records);
                    break;
                case 2:
                    change_price(&total_records);
                    break;
                case 3:
                    display(&total_records);
                    break;
                case 4:
                    return 0;
                default:
                    printf("Invalid input. Please try again.\n");
                    break;
            }
        }
        printf("\n\n");
    }
}

void newrecord(int *total_records) {
    FILE* file;
    file = fopen("candy.txt", "r+");
    struct candy temp, checker;
    int flag = 0;

    if (*total_records == MAX) {
        printf("Maximum number of records reached.\n"); // stop function if max records reached
        return;
    }

    while (1) {
        printf("Enter item number: ");
        if (scanf("%d", &temp.itemNo) != 1) {
            input_buffer();
            printf("Invalid input. Please try again.\n");
            continue;
        }

        rewind(file); // reset file pointer

        // check if item number alread exists
        while (fread(&checker, sizeof(struct candy), 1, file) == 1) {
            if (checker.itemNo == temp.itemNo) {
                printf("Item number already exists. Please try again.\n");
                flag = 1;
                break;
            }
        }

        if (flag == 1) {
            flag = 0;
            continue;
        }

        printf("Enter item description: ");
        if (scanf("%19s", temp.item_desc) != 1) {
            input_buffer();
            printf("Invalid input. Please try again.\n");
            continue;
        }

        printf("Enter price: ");
        if (scanf("%f", &temp.price) != 1 || temp.price < 0) {
            input_buffer();
            printf("Invalid input. Please try again.\n");
            continue;
        }
        break;
    }

    // add the new record to the file
    fseek(file, 0, SEEK_END);
    fwrite(&temp, sizeof(struct candy), 1, file);
    (*total_records)++;
    printf("Record successfully added.\n");
    fclose(file);
}

void change_price(int *total_records) {
    FILE* file;
    file = fopen("candy.txt", "r+");
    int itemNo;
    float newPrice;
    int found = 0;

    printf("Enter the item number to change the price: ");
    if (scanf("%d", &itemNo) != 1 || itemNo < 0) {
        input_buffer();
        printf("Invalid input. Please try again.\n");
        return;
    }
    // find if the item number exists
    for (int i = 0; i < (*total_records); i++) {
        struct candy temp;
        fseek(file, i * sizeof(struct candy), SEEK_SET);
        fread(&temp, sizeof(struct candy), 1, file);

        if (temp.itemNo == itemNo) {
            found = 1;
            printf("Enter the new price: ");
            if (scanf("%f", &newPrice) != 1 || newPrice < 0) {
                input_buffer();
                printf("Invalid input. Please try again.\n");
                return;
            }
            // change the price
            temp.price = newPrice;
            fseek(file, i * sizeof(struct candy), SEEK_SET);
            fwrite(&temp, sizeof(struct candy), 1, file);
            printf("Price for item number %d updated successfully.\n", itemNo);
            break;
        }
    }

    if (!found) {
        printf("Item number %d not found.\n", itemNo);
    }
    fclose(file);
}

void display(int *total_records) {
    FILE* file;
    file = fopen("candy.txt", "r");
    printf("Display\n");

    printf("%-8s\t%-20s\t%-6s\n", "Item No.", "Item Description", "Price");
    printf("-------------------------------------------------------------------\n");

    for (int i = 0; i < (*total_records); i++) {
        struct candy temp;
        fseek(file, i * sizeof(struct candy), SEEK_SET);
        fread(&temp, sizeof(struct candy), 1, file);
        printf("%-8d\t%-20s\t%.2f\n", temp.itemNo, temp.item_desc, temp.price);
    }
    fclose(file);
}


void input_buffer() {
    while (getchar() != '\n') {
        //input buffer
    }
}
