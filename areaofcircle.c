#include<stdio.h>
#define PI 3.14
void main(){
    float r,area;
    printf("Give me the radius of the circle: ");
    scanf("%f",&r);
    area=PI*r*r;
    printf("The area is %.4f sq. units", area);
    }
