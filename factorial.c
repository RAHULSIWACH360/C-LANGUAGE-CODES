// Program for calculating the factorial.
#include<stdio.h>

    int main(){
    int a,i;
     double b =1 ;
     printf("Entre the number");
     scanf("%d", &a);

     for(i=1;i<=a;i++)
     {
         b = b*i;
     }
printf("The factorial of %lf is", b);
return 0;
}