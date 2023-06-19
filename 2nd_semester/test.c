#include <stdio.h>
#include <stdlib.h>

struct customer {
    char customer_name[30];
    char cust_address[30];
    struct product {
        char prod_code[9];
        char product_description[30];
        float unit_price;
        int quantity;
    };
    struct product prod[3];
};
struct customer cust;


void RECORD();
void KOMPUTE();


int main(void) {
    RECORD();
    printf("\n\n\n");

    printf("Receipt for Customer: %s\n", cust.customer_name);
    printf("Customer Address: %s\n", cust.cust_address);
    printf("Product Code\t\tProduct Description\t\t\t\tUnit Price\t\tQuantity\n");

    for (int i = 0; i < 3; i++) {
        printf("%-15s\t\t%-35s\t\t%.2f\t\t\t%d\n", cust.prod[i].prod_code, cust.prod[i].product_description, cust.prod[i].unit_price, cust.prod[i].quantity);
    }

    KOMPUTE();
}   


void RECORD(){
    printf("Enter Customer Name: ");
    scanf("%s", cust.customer_name);
    printf("Enter Customer Address: ");
    scanf(" %[^\n]", cust.cust_address);
    printf("\n\n");
    
    for (int i = 0; i < 3; i++) {
        printf("Enter Product Code: ");
        scanf(" %[^\n]", cust.prod[i].prod_code);

        printf("Enter Product Description: ");
        scanf(" %[^\n]", cust.prod[i].product_description);

        printf("Enter Unit Price: ");
        scanf("%f", &cust.prod[i].unit_price);
        getchar();
        printf("Enter Quantity: ");
        scanf("%d", &cust.prod[i].quantity);
        printf("\n\n");
    }
}  


void KOMPUTE() {
    float total = 0;
    for (int i = 0; i < 3; i++) {
        total += cust.prod[i].unit_price * cust.prod[i].quantity;
    }
    printf("\t\t  Total: %.2f", total);
}