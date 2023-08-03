// Program for using pointers concept.
#include <stdio.h>

int main()
{
    int a=6;
    char c='s';
    double b=7.4;
    
    int *ptr= &a;
    char *ch= &c;
    double *dub= &b;
    
    double m= 7.8;
    double *str = &m;
    
    printf("\nsize of *ptr %ld\n",sizeof(ptr));
    printf("\nsize of *ptr %ld\n",sizeof(ch));
    printf("\nsize of *ptr %ld\n",sizeof(dub));

    printf("\nsize of a %ld\n",sizeof(a));
    printf("\nsize of c %ld\n",sizeof(c));
    printf("\nsize of b %ld\n",sizeof(b));
    
    // printf("\nAddress of *ptr %ld\n",ptr);
    // printf("\nAdderss of *ptr %ld\n",ch);
    // printf("\nAdderss of *ptr %ld\n",dub);
    
    printf("\nAddress of *ptr %p\n",ptr);
    printf("\nAdderss of *ptr %p\n",ch);
    printf("\nAdderss of *ptr %p\n",dub);
    
    
    printf("\nValue of *ptr %d\n",*ptr);
    printf("\nValue of *ptr %c\n",*ch);
    printf("\nValue of *ptr %lf\n",*dub);
    
    printf("\nAddress of a %p\n",&ptr);
    printf("\nAdderss of c %p\n",&ch);
    printf("\nAdderss of b %p\n",&dub);
    
    printf("\nValue of *str %d\n",(int)*str);
    
    
    
    return 0;
}
