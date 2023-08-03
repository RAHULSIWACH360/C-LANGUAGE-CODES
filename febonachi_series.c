// Program for calculating the fibonacci series.
#include<stdio.h>

    int main(){

int i,n;
printf("Enter the number\n");
scanf("%d", &n);

int a = 0, b=1 , c=0;
printf("\n%d\t %d", a , b);

for(i=0;i<=n;i++)
{

c = a + b;
a = b;
b = c;

printf("\t%d ",c);

}


return 0;

}