#include<stdio.h>
void main(){
    int base,height;
    float area;
    printf("Enter base and the height of the triangle: ");
    scanf("%d %d", &base,&height);
    area=base*height*0.5;
    printf("The area of the triangle is : %.2f square units",area);
    }
