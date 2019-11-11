

#include "customerModule.h"
#include <stdio.h>
#include <string.h> // strcmp()
#include <stdlib.h> // exit()



T_customer *newCustomer(struct Customer * p_c){

    printf("Insert customer's name: ");
    fgets(p_c->name, DIM, stdin);

    printf("Choose customer type:\n");
    printf("a: GOLD\n");
    printf("b: SILVER\n");
    printf("c: BRONZE\n");

    switch (getchar()) {
        case 'a':
            p_c->typeOfCustomer = "gold";
            // equivalent to (*p_c).typeOfCustomer=...
            break;
        case 'b':
            p_c->typeOfCustomer = "silver";
            break;
        case 'c':
            p_c->typeOfCustomer = "bronze";
            break;
        default:
            perror("Unknown customer type");
            exit(1);
    }
    return p_c;
}

float computePrice(char *type, float totalAmount, float shipping) {
    /* Calculate the total price
     * depending on customer category. */
    float price;

    if (strcmp(type,"gold" )==0){
        price=0.8*totalAmount;// free shipping;
    }
    else if (strcmp(type,"silver" )==0){
        price=0.9*totalAmount+shipping;
    }
    else if (strcmp(type,"bronze" )==0){
        price=totalAmount+shipping; // free shipping;
    }
    else{
        perror("Unknown customer type");
        exit(1);
    }
    return price;
}
