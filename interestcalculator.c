#include<stdio.h>
void main(){
    int p,time;
    float rate,SI;
    printf("Enter Principal, Rate of interest and the time in years: ");
    scanf("%d %f %d",&p,&rate,&time);
    SI=p*rate*time/100;
    printf("The simple interest is %.2f",SI);
    }
