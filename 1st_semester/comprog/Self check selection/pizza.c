/* Pizza parlors offers different pizza sizes in terms of diameters. 
For example, Pizza Hut has three options: 10 inches, 12 inches and 14 inches
diameter. Extravaganza pizza cost 178 pesos, 259 pesos and 354 pesos 
respectively. Write a program that will input the diameter of the pizza
and its price. Determine and print 
area of the pizza 
price divided by area.  
Note that the area of a circle is equivalent to PI * (diameter / 2)2

*/

#include <stdio.h>

int main(void)
{
    float dia, area, pesos;
    printf("Input diameter: ");
    scanf("%f", &dia);
    area = 3.14 * (dia / 2) * (dia / 2);
     
    if (dia == 10)
    {
        pesos = 178;
        printf("The price will be 178 pesos\n");
    }
    else if (dia == 12)
    {
        pesos = 259;
        printf("The price will be 259 pesos\n");
    }
    else if (dia == 14)
    {
        pesos = 354;
        printf("The price will be 354 pesos\n");
    }
    else 
    {
        printf("Error input\n");
        return;
    }
    pesos = pesos / area;
    printf("The area is %f\n", area);
    printf("The price divided by area: %f\n", pesos);
}
