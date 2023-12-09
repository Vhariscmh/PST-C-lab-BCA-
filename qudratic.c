#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
     double a,b,c,r1,r2,d,rp,ip; 
     clrscr(); 
      printf("Enter the values of a, b, c: "); 
       scanf("%lf %lf %lf", &a, &b, &c);
         d=b*b-(4*a*c); 
          if(d>0)
           {  
             r1 = (-b+sqrt(d)) / (2*a); 
               r2 = (-b-sqrt(d)) / (2*a);  
                printf("Real Roots: %.2lf  %.2lf", r1, r2); 
                 }
                   else if(d==0) 
                   {   r1 = -b / (2*a);  
                    r2 = -b / (2*a);
                       printf("Roots are equal: %.2lf %.2lf", r1, r2); 
                        } 
                         else
                          {   rp = -b / (2*a);   ip = sqrt(-d) / (2*a);  
                           printf("Roots are imaginary \n");
                              printf("Root 1: %.2lf + %.2lfi \t Root 2: %.2lf - %.2lfi", rp, ip, rp, ip); 
                               }  getch();
}