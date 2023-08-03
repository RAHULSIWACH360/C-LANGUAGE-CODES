#include<stdio.h>
#include<math.h>

int main () {
    
    int i,a,fact=1,x=1,t=1;   
    float sum=1;
    
    printf("Entre the value:\n");
    scanf("%d%d",&x,&t);
    
    for(i=1;i<=t;i++)
    {
        //a=t*x/i;
        fact=fact*i;
       // sum=sum+a;
       sum=sum+pow(x,i)/fact;
    }
    printf(" %f",sum);
    
    return 0;
}