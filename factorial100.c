#include<stdio.h>
int main()
{
    int a,i;
    long double b = 1;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("Factorial is %Lf",b);
    return 0;
}