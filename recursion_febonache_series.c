#include<stdio.h>

int fibsr(int a);
    int main(){
    
    int a,n;
    printf("Enter the number of series\n");
    scanf("%d",&a);
fibsr(a);
printf("%d",fibsr(a));

return 0;
}

int fibsr(int a){
     if(a==0)
     return 0;

     else if(a==1)
     return 1;
     else
     return fibsr(a-1)+fibsr(a-2);
}