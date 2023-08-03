#include<stdio.h>

int main() {

int a,b,c,d,e;
    

a=20;

b=10;

c=15;

d=5;

// e=(a+b)*c/d;    // -----------------> 90
// e = ((a+b)*c)/d;  // ------------> 90
//  e = (a+b) * (c/d);  // ----> 90
//e = a+ (b*c)/d;   //------> 50

int g;
  g = 6*2 / (2+1 * 2/3 + 6) + 8 * (8/4);  // -----> 17

// printf("The value of n is %f\n", (float) e);
printf("g is %d\n", g);

}