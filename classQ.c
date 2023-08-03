// Program for checking the divisibility of the number.
#include <stdio.h>

int main()
{

    int num;

    printf("entre the number\n");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 8 == 0)
    {
        printf("Number is  divisible by 5 and 8\n");
    }

    else if (num % 5 == 0)
    {
        printf("Number is divisible by 5 only\n");
    }
    else if (num % 8 == 0)
    {
        printf("Number is divisible by 8 only\n");
    }
    else
    {
        printf("Number is not divisible by both 5 and 8\n");
    }

    return 0;
}