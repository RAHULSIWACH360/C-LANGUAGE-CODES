// Program for using the concept of call by value and reference.
#include <stdio.h>

void swap1(int*,int*);
void swap(int num1, int num2);

int main()
{
    int a,b,c,d;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    
    printf("Swapping by reference\n");
    printf("Before swapping : %d %d\n",a,b);
  swap1(&a,&b);
 printf("After swapping : %d %d\n",a,b); 
  
    printf("Enter the numbers\n");
    scanf("%d%d",&c,&d);
    printf("Swaping by value\n");
    printf("Before swapping : %d %d\n",c,d);
  swap(c,d);
  printf("Out side function\n");
    printf("After swapping : %d %d\n",c,d);
  
  return 0;
}

void swap1(int *n1,int *n2)
{
    int temp;
    
    temp=*n1;
    *n1=*n2;
    *n2=temp;
    
}
void swap(int num1, int num2)
{
   int temp;
   printf("In the function\n");
   printf("Before swapping: %d %d\n",num1,num2);
   temp = num1;
   num1 = num2;
   num2 = temp;
   printf("After swapping: %d %d\n",num1,num2);
}
