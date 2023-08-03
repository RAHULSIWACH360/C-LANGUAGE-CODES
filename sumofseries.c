#include<stdio.h>
#include<math.h>

int main (){
    int x,n,fact=1,i=1;
    float sum=1;
    printf("Enter the value of x and n\n");
    scanf("%d%d" ,&x,&n);
    while(i<=n)
{
    fact=fact*i;
    sum=sum+pow(x,i)/fact;
    i++;
}
printf("%f\n",sum);
return 0;
}