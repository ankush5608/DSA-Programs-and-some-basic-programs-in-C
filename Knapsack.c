#include <stdio.h>

void knapsack(int n,int c,int w[10],int p[10],int a[10][10] )
{
  for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=c;j++)
        {
          if(i==0 || j==0)
          {
            a[i][j]=0;
          }

          else if(w[i]>j)
          {
            a[i][j] = a[i-1][j];
          }

          else
          {
            a[i][j] = (a[i-1][j]>(a[i-1][j-w[i]]+p[i])?a[i-1][j]:(a[i-1][j-w[i]]+p[i]));
          }
        }
    }

  printf("profit = %d\n",a[n][c]);
  for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=c;j++)
        {
          printf("%d\t",a[i][j]);
        }

      printf("\n");
    }
}

void main()
{
  int n,c,w[10],p[10],a[10][10];
  printf("Enter the number of objects:\n");
  scanf("%d",&n);
  printf("Enter the capacity:\n");
  scanf("%d",&c);
  printf("Enter weights:\n");
  for(int i=1;i<=n;i++)
    {
      scanf("%d",&w[i]);
    }
  printf("Enter profits:\n");
  for(int i=1;i<=n;i++)
    {
      scanf("%d",&p[i]);
    }
  knapsack(n,c,w,p,a);

}