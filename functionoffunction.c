//Program for creating function of functions.
/* #include <stdio.h>

void addition(),multi();
int sub(),div();

int c,d,e;
float f;

int main()
{
addition(2,3);
sub();
multi();
div(10,2);
    return 0;
}

void addition(int a,int b)
{
int c = a+b;
    printf("%d\n",c);
}

int sub()
{
int a,b;
//printf("Enter the value of a and b\n");
//scanf("%d%d",a,b);
a=10,b=20;
int d = a-b;
    printf("%d\n",d);
return d;
}

void multi()
{
 int a;
 int b;
//printf("Enter the value of a and b\n");
//scanf("%d%d",a,b);
a=10,b=20;
     e = a*b;
    printf("%d\n",e);
}

int div(int a ,int b)
{
float f = a/b; 
      printf("%f\n",f);
    return f;
}
*/

#include <stdio.h>

void addition(),multi();
int sub(),div();

int c,d,e;
float f;

int main()
{
addition(2,3);
sub();
multi();
div(10,2);
    return 0;
}

void addition(int a,int b)
{
int c = a+b;
    printf("%d\n",c);
}

int sub()
{
int a,b;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
//a=10,b=20;
int d = a-b;
    printf("%d\n",d);
return d;
}

void multi()
{
 int a;
 int b;
printf("Enter the value of a and b\n");
scanf("%d%d",&a,&b);
//a=10,b=20;
     e = a*b;
    printf("%d\n",e);
}

int div(int a ,int b)
{
float f = a/b; 
      printf("%f\n",f);
    return f;
}





