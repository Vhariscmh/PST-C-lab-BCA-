#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,sum_p=0;
    while(1)
    {
    printf("enter the numbe:");
    scanf("%d",&a);
    if(a>0)
    {
        sum_p+=a;
    }
    if(a==999){
        break;
    }
    }
    printf("sum of positive enter:%d\n",sum_p);

}