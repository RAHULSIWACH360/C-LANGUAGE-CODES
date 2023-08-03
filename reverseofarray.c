# include<stdio.h>

int main(){
    
    int i;
    int a[5];
    
    printf("Enter the value \n");
    
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    
    for(i=0;i<5;i++)
    {
     printf("%d",a[i]);
    }
    printf("\n");
 for(i=4;i>=0;i--)
    {
     printf("%d",a[i]);
    }
    
    return 0;
}
