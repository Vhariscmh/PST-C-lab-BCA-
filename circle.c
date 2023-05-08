#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float r,area,circum;
    printf("radius of circle:");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r*r;
    printf("enter area of circle:%f\n",area);
    printf("enter circum of circle:%f\n",circum);
}