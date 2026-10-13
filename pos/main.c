/*
Project:Point of sale system
Description:Takes the prices and the quantities of two items and amount tendered and output
             change in denomination
Author:Michelle Musimbi
Date:6/10/2026
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{//Declare variables
    int price1,price2,qty1,qty2,change,total_amount,amount_tendered,five_hundreds,two_hundreds,
        one_hundreds,fifties,shillings,remainder;

     printf("Welcome to champions POS!\n");
     //capture inputs
     printf("Enter the price followed by quantity of :/n item 1: ");
     scanf("%d%d",&price1,&qty1);
     printf("item 2: ");
     scanf("%d%d",&price2,&qty2);

     // perform computations
     total_amount = price1 * qty1 + price2 * qty2;
     printf("Total Amount Due: %d" ,total_amount);
     printf("Enter total amount tendered :");
     scanf("%d", &amount_tendered);
     change = amount_tendered - total_amount;
     printf("Change Due: %d" ,change);
     five_hundreds = change /500;
     remainder = change %500;
     two_hundreds = remainder / 200;
     remainder = remainder % 200;
     one_hundreds = remainder / 100;
     remainder = remainder %100;
     fifties = remainder /50;
     shillings =remainder % 50;
     printf("Change in denominations\n");
     printf("Five hundreds: %d\n ", five_hundreds);
     printf("Two Hundreds:  %d\n ", two_hundreds);
     printf("One Hundreds: %d\n ", one_hundreds);
     printf("Fifties:%d\n ",fifties);
     printf("Shillings:%d\n ", shillings);
     printf("Thank you! Bye \n");
     return 0;
}

