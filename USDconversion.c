#include<stdio.h>
void main(){
    float usd,inr,rate;
    printf("Enter in USD and the exchange rate for the day: ");
    scanf("%f %f",&usd,&rate);
    inr=usd*rate;
    printf("The value in INR is Rs.%.2f",inr);
    }
