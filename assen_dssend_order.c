// Program for printing assendind and decending order.
#include <stdio.h>
#include <string.h>

int main()
{
  int i,j,temp;
   int a[8];
   printf("Enter the numbers\n");
   for(i=0;i<8;i++)
   {
     scanf("%d",&a[i]);
   }
   
   for(i=0;i<8;i++)
   {
     for(j=i+1;j<8;j++)
     {
       if(a[i]>a[j])
       {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
   
   
     printf("Assending order of numbers is\n");
   for(i=0;i<8;i++)
   {
     printf("%d",a[i]);
   }
   for(i=0;i<8;i++)
   {
     for(j=i+1;j<8;j++)
     {
       if(a[i]<a[j])
       {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
       }
     }
   }
   
   
     printf("\nDessending order of numbers is\n");
   for(i=0;i<8;i++)
   {
     printf("%d",a[i]);
   }
  
    return 0;
}
