// Program for finding the roots of a number.
#include<stdio.h>
#include<math.h>
int main(){
    
    double a,b,c,r1,r2,real,imag,disc;
    
   printf("Enter coefficients a, b and c: ");
   scanf("%lf %lf %lf",&a, &b, &c);
   
   disc = b*b-4*a*c;
   
   if(disc>0)
   {
       r1=(-b-sqrt(disc))/2*a;
       r2=(-b+sqrt(disc))/2*a;
        printf("root1 = %.2lf and root2 = %.2lf",r1 , r2);
   }
   
    else if (disc == 0)

   {

       r1 = r2 = -b/(2*a);

       printf("root1 = root2 = %.2lf;", r1);

   }
   
   else

   {

       real = -b/(2*a);

       imag = sqrt(-disc)/(2*a);

       printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, imag, real, imag);

   }
   return 0;
}