#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,y;
    printf("enter a number \n x");
    scanf("%d",&x);
    printf("enter a number \n y");
    scanf("%d",&y);
    int temp =x;
    x=y;
    y=temp;
    printf("after swapping: x=%d,y=%d",x,y);
}