
#ifndef CUSTOMERMODULE_H
#define CUSTOMERMODULE_H

#define DIM 50


typedef struct Customer {
    char name[DIM]; //
    char* typeOfCustomer; // gold, silver, bronze, etc
    // to implement:
    //      List orders; address; telephone number; etc
    //      ...
}T_customer;


T_customer *newCustomer(T_customer *p_c);

float computePrice(char *type, float totalAmount, float shipping);

#endif //CUSTOMERMODULE_H
