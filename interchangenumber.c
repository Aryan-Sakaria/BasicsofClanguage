#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The numbers entered by you are a=%d and b=%d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("New numbers are a=%d and b=%d",a,b);
    }
