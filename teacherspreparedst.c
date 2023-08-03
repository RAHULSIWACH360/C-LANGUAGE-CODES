// Program for students databaase entries.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int marks[5];
    char name[5][20], uid[5][10];
    int i,j;
    printf("***********************STUDENT DATABASE SYSTEM*******************\n");
    
    for(i=0;i<5;i++)
    {
        printf("\nEntre details of student %d\n",i+1);
        printf("Entre name\n");
        scanf("%s",name[i]);
        printf("Entre roll number\n");
        scanf("%s",uid[i]);
        printf("Entre total marks\n");
        scanf("%d",&marks[i]);
    }
    system("cls");
    printf("***********************STUDENT DATABASE SYSTEM*******************\n");
    printf("%7s%13s%20s\n","NAME","UID","MARKS");
    for(i=0;i<5;i++){
        printf("%7s",name[i]);
        printf("%13s",uid[i]);
        printf("%20s",marks[i]);
        printf("\n");
        
    }
    return 0;
        
        
    
}