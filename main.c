/* * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Ask for customer's name, type (gold, silver, bronze)
 * (and, optionally, for other data)
 *
 * Apply a discount that depends on the type of customer
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * */
 
#include <stdio.h>
#include "customerModule.h"


int main() {
    T_customer c, *p_c;
    float price, finalPrice;
    const float shipping=10;
    p_c=&c;

    printf("** INSERT CUSTOMER **\n");
    p_c= newCustomer(p_c);

    printf("INSERT PRICE:\n");
    scanf("%f",&price);
    printf("COMPUTE FINAL PRICE (discount, shipping, etc):\n");

    finalPrice= computePrice(c.typeOfCustomer, price, shipping);
    //finalPrice=computePrice(p_c->typeOfCustomer,price, shipping);

    // OUTPUT

    printf("customer:\n");
    printf("%s -> %s customer \n", p_c->name, p_c->typeOfCustomer);

    printf("Initial price: %.2f\n",price);
    printf("Final price: %.2f\n",finalPrice);

    getchar();
    return 0;
}
