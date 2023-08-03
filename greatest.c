#include<stdio.h>

    int main(){
    
    int a, b ,c, big ;

    printf("\nEnter the values of numberes\n");

    scanf("%d %d %d",&a ,&b ,&c);


big = (a>b && a>c)? a:(b>c)?b:c;


 printf("\nBiggest number is %d\n",big);


return 0;
}