#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int num;
    printf("enter a mark of student:");
    scanf("%d",&num);
    printf("enter %d",num);
    if(num>=80)
    {
        printf("you got A grade");
    }else if(num>=60)
    {
        printf("you got B grade");
    }
    else if(num>=40)
    {
        printf("you got c grade");
    }else(num<40)
    {
        printf("you failed in examination");
    }
}