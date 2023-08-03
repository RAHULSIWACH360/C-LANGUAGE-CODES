// Program for printing array.

#include <stdio.h>

int main()
{
    int i,a[5];
    
    printf("Entre the value:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[5]);
        
    }
    for(i=4;i>=0;i--)
    { printf("The value of %d is %d\n",i,a[5]);
     printf("The value of %d is %p\n",i,&a[5]);
    }

    return 0;
}
