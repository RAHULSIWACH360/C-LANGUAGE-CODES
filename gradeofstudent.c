// Program for calculating the grades of students.
#include<stdio.h>
int main(){
    
    int math,bio,phy,chem,eng;
    float per;
    
    printf("Enter the marks of\nMaths,Biology,Physics,Chemistry,English\n ");
    scanf("%d%d%d%d%d",&math,&bio,&phy,&chem,&eng);
    
    per = (math+bio+phy+chem+eng)/5.0;
    
    if(per>=90)
    {
        printf("A\n");
    }
    else if(per>=80)
    {
        printf("B\n");
    }
   else if(per>=70)
    {
        printf("C\n");
    }
    else if(per>=50)
    {
        printf("D\n");
    }
    else{
        printf("F\n");
    }
    return 0;

}
