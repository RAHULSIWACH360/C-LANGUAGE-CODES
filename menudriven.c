// For checking whether the number is positive or negative.
#include<stdio.h>

    int main(){
    
    int num ;
    printf("Entre the number\n");
    scanf("%d", &num);

    if(num<0){
        printf("The number is negative\n");
    }
else if(num>0){

        printf("The number is positive\n");

}
else{
    printf("The number is zero\n");
}
return 0;
}