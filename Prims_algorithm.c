#include<stdio.h>
#include<stdlib.h>

int a[10][10],n,visited[20];

void prims()
{
  int count=0,cost=0,min,u,v;
  visited[1]=1;
  while(count<n-1)
    {
      min=999;
      for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=n;j++)
            {
              if((visited[i]&&(!visited[j])) &&(min>a[i][j]))
              {
                min=a[i][j];
                u=i;
                v=j;
              }
            }
        }

      printf("\n%d-->%d=%d\n",u,v,a[u][v]);
      cost+=a[u][v];
      visited[v]=1;
      count++;
    }
  printf("Cost=%d\n",cost);
}


void main()
{
  printf("Enter the number of vertices:\n");
  scanf("%d",&n);
  printf("Enter the adjacency matrix:\n");
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
        {
          scanf("%d",&a[i][j]);
          visited[i]=0;
        }
    }

  prims();
}