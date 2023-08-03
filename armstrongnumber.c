// Program for checking armstrong number.
// #include <stdio.h>

// int main() {
//    int arms = 153; 
//    int check, rem, sum = 0;

//    check = arms;

//    while(check != 0) {
//       rem = check % 10;
//       sum = sum + (rem * rem * rem);
//       check = check / 10;
//    }

//    if(sum == arms) 
//       printf("%d is an armstrong number.\n", arms);
//    else 
//       printf("%d is not an armstrong number.\n", arms);
      
//    return 0;
// }


#include <stdio.h>

int main()
{
    int num=0,i,rem=0,result=0,original;
printf("Enter the number\n");
scanf("%d",&num);
 original=num;
   //printf("original = %d\n",original); 
while(num!=0)
{
    rem=num%10;
    result=result+(rem*rem*rem);
    num=num/10;
}

if(result == original)
{
   printf("The number is Armstrong\n"); 
    
}
else{
    
   printf("The number is not Armstrong\n"); 
}
    return 0;
}
