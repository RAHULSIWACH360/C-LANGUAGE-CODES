// Program for performing string operations.
#include <stdio.h>
#include <string.h>

int main()
{
    
char name1[15],name2[15];

printf("Enter the first name\n");
fgets(name1,sizeof(name1),stdin);  //read strings
printf("Enter the second name\n");
fgets(name2,sizeof(name2),stdin);  //read strings
printf("Name \n");
puts(name1);
puts(name2);

printf("Length of string is : %ld\n",strlen(name1));
printf("Length of string is : %ld\n",strlen(name2));
printf("Comparision of string is : %d\n",strcmp(name1,name2));
printf("Copy the string is : %s\n",strcpy(name1,name2));
printf("Concatenation of string is : %s\n",strcat(name2,name1));

    return 0;
}
