// Program for finding sum of a range.
#include <stdio.h>

int main() {
  
  int n,m,i,sum=0;
  
  printf("Enter the range of numbers\n");
  scanf("%d%d",&n,&m);
  
  for(i=n;i<m;i++)
  {
      if(i%5==0)
      {
      sum=sum + i;
      }
  }
  
  printf("The of the numbers is = %d",sum);
   return 0;
}