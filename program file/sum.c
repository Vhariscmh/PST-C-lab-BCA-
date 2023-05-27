#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,r,sum=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    printf("the number is a palindrome.");
    else
    printf("the number is not palindrome.");
}