#include <stdio.h> 
#include <conio.h> 
void main() 
{  
    int i,j,p,q,m,n,a[10][10],b[10][10],c[10][10];
    printf("Enter the size of matrix A: ");  
    scanf("%d %d", &m, &n);  
    printf("Enter the elements: \n");  
    for(i=0;i<m;i++) 
    {   for(j=0;j<n;j++) 
    {    
        scanf("%d", &a[i][j]);   
        } 
         }  
         printf("Enter the size of matrix B: "); 
        scanf("%d %d", &p, &q); 
        printf("Enter the elements: \n");  
        for(i=0;i<p;i++) 
        {   for(j=0;j<q;j++) 
        {    
            scanf("%d", &b[i][j]);   
            } 
             }  if((m==p) && (n==q))
              {   for(i=0;i<m;i++) 
              {    for(j=0;j<n;j++)
               {     c[i][j] = a[i][j] + b[i][j];    }   }   for(i=0;i<m;i++) {    for(j=0;j<n;j++) {     printf("%d \t", c[i][j]);    }    printf("\n");   }  }  getch(); 
}