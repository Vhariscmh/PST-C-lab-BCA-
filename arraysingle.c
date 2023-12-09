#include <stdio.h> 
#include <conio.h> 
void main() 
{  
    int size, arr[15], sum=0, i, avg;  
    printf("Enter the size of the array: \n");  
    scanf("%d", &size);  
    printf("Enter the values of the array: \n");  
    for(i=0;i<size;i++) 
    {   
        scanf("%d", &arr[i]);  
        }  
        //Calculate Sum  for(i=0;i<size;i++) 
        {   sum = sum + arr[i];  
        }  //Calculate Average  avg = sum / size;  
        printf("Sum of the array: %d \n", sum);  
        printf("Average of the sum: %d \n", avg);
 getch(); 
 } 