// Program for performing different airthmetic operations.
#include<stdio.h>

void main(){

int a,b,sum,sub,mult;
float divd,mod;

printf("Entre the value of a and b\n");
scanf("%d %d", &a,&b);

sum = a+b;
sub = a-b;
mult = a*b;
divd = a/b;
mod = a%b;

printf("Addition of a and b is %d\n" , sum);
printf("Subtraction of a and b is %d\n" , sub);
printf("Multiplication of a and b is %d\n" , mult);
printf("Division of a and b is %f\n" , divd);
printf("Modulo of a and b is %f\n" , mod);



}