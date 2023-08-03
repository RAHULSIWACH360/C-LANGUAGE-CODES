// Program for finding the smallest number in an array.
#include <stdio.h>

int main()
{
    int a[3],i,smallest;
    
    for(i=0;i<3;i++)
    {
    printf("Enter the value of number\n");
    scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
    smallest=a[0];
    if(smallest>a[i])
    {
        smallest=a[i];
        
    }
    }
printf("The smallest number is = %d\n ",smallest);

    return 0;
}
