// Program for multiplication of two matrices.
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, i, j,k, a[i][j], b[i][j], sum[i][j],sub[i][j], product[i][j],mul=0;
    printf ("Enter the number of row first matrices:\n");
    scanf ("%d", &r1);
    printf ("Enter the number of column of first matrices:\n");
    scanf ("%d", &c1);
    printf ("Enter the Data Elements of first matrices\n");
    for (i=1;i<=r1;i++)
    {
      for (j=1;j<=c1;j++)
      {
          scanf ("%d",&a[i][j]);
      }
    }
    printf ("Enter the number of row of second matrices\n");
    scanf ("%d", &r2);
    printf ("Enter the number of column second matrices :\n");
    scanf ("%d", &c2);
    printf ("Enter the element of second matrix:\n");
    for (i=1;i<=r2;i++)
    {
        for (j=1;j<=c2;j++)
        {
            scanf ("%d",&b[i][j]);
        }
    }
    /*
    for (i=1;i<=r1;i++)
    {
        for (j=1;j<=c1;j++)
        { 
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
            printf ("The sum of matrix: ");
        printf("\n");
    for (i=1;i<=r1;i++)
    {
        for (j=1;j<=c1;j++)
        {
            printf (" %d\t ", sum[i][j]);
        }
        printf("\n");
    }
           printf ("The subtraction of matrix: ");
    for (i=1;i<=r1;i++)
    {
        for (j=1;j<=c1;j++)
        {
            sub[i][j]=a[i][j]-b[i][j];
        }
    }
        printf("\n");
    for (i=1;i<=r1;i++)
    {
        for (j=1;j<=c1;j++)
        {
            printf ("%d\t",sub[i][j]);
        }
        printf("\n");
    }   
        */   printf ("The multiplication of matrix: ");
    for (i=1;i<=r1;i++)
    {
        for (j=1;j<=c2;j++)
        { 
             for(k=1;k<=r2;k++){
            mul += a[i][k]*b[k][j];
            product[i][j] = mul;
             }
             mul=0;
        }
    }
        printf("\n");
    for (i=1;i<=r1;i++)
    {
        for (j=1;j<=c1;j++)
        {
            printf (" %d\t", product[i][j]);
        }
        printf("\n");
    } 
    return 0;
}