#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int a,b,c;
    printf("enter number ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("grater number is:%d",a);
    }
    else if(b>c)
    {
        printf("greater number is:%d",b);
    }
    else
    {
        printf("greater number is:%d",c);
    }
}