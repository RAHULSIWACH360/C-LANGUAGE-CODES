// Program for collecting details of students.
#include<stdlib.h>
#include <stdio.h>

int main(){
    
    int sum=0 ,marks[5],i,j,avg=0;
    char name[10][10],uid[10][10];
    
    printf("Entre the name:\n");
    for(i=0;i<5;i++)
    {
        scanf("%s",&name[7][7]);
    }
     printf("Entre the marks:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[5]);
        sum=sum+marks[i];
        avg=sum/5;
    }
     printf("Entre the uid:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&uid[5]);
    }
    //system(cls);
    printf("\n**********************STUDENTS DATABASE SYSTEM************************************\n");
    printf("%7s\n",name[7][7]);
    printf("%9d\n",marks[5]);
    printf("%9d\n",uid[5]);
    printf("The average marks of students is:\n");
    return 0;
    
}