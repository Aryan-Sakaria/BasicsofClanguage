#include<stdio.h>
void main(){
    float price,qty,amt;
    printf("Enter price and the quantity: ");
    scanf("%f %f",&price,&qty);
    amt=price*qty;
    printf("The amount = %.2f",amt);
}
