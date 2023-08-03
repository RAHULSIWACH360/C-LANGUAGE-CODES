// Program to perform addition using bitwise operators.
#include<stdio.h>

int bitwiseadd(int x, int y)
{
    while(y!=0)
    {
        int carry = x & y;
        x = x^y;
        y = carry << 1;
    }
    return x;
}

    int main(){
    
int num1 , num2;
printf("\n Entre two numbers to perform addition using bitwise operators:\n");
scanf("%d %d",&num1,&num2);
printf("\n Sum is %d",bitwiseadd(num1,num2));



return 0;
}