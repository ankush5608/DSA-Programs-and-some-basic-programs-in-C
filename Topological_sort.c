#include <stdio.h>
#include<stdlib.h>

void read_adjacency(int a[10][10],int n)
{
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
}

void find_indegree(int a[10][10],int n,int indegree[10])
{
  int sum;
  for(int j=0;j<n;j++)
    {
      sum=0;
      for(int i=0;i<n;i++)
        {
          sum = sum+a[i][j];
        }
      indegree[j]=sum;
    }
}

void topological(int a[10][10],int n)
{
  int indegree[10],i,u,k=0,top=-1,s[10],t[10];
  find_indegree(a, n,indegree);
  for(i=0;i<n;i++)
    {
      if(indegree[i]==0)
      {
        s[++top]=i;
      }
    }

  while(top!=-1)
    {
      u=s[top--];
      t[k++]=u;
      for(int i=0;i<n;i++)
        {
          if(a[u][i]!=0)
          {
            indegree[i]--;
          

          if(indegree[i]==0)
          {
            s[++top]=i;
          }
          }
        }
    }

  printf("Sorted topologically:\n");
  for(int i=0;i<n;i++)
    {
      printf("%d\t",t[i]);
    }
}


void main()
{
  int n,a[10][10];
  printf("Enter the number of vertices:\n");
  scanf("%d",&n);
  read_adjacency(a,n);
  topological(a,n);
}