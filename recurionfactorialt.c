#include <stdio.h>

int fact(int);
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    printf("The %d factorial is :%d\n", x,fact(x));
   
  return 0;
}

int fact(int a)
{
    if(a==0)
    return 1;
    
    else if (a==1)
    return 1;
    
    else {
        return a*fact(a-1);
    }
    
    
}