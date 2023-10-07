#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int a[],int u,int v)
{
   int temp;
    temp = a[u];
    a[u] = a[v];
    a[v] = temp;
}

int partition(int a[],int l,int r)
{
  int i,j,pivot;
  pivot=a[l];
  i=l;
  j=r;
  while(i<j)
    {
      while(a[i]<=pivot)
        {
          i++;
        }

      while(a[j]>=pivot)
        {
          j--;
        }
      if(i<j)
      {
        swap(a,i,j);
      }
    }
  swap(a,l,j);
  return j;
}

void quiksort(int a[],int l,int r)
{
  if(l<r)
  {
    int s;
    s=partition(a,l,r);
    quiksort(a, l, s-1);
    quiksort(a, s+1,r);
  }
}

void  main()
{
  int n,a[500];
  clock_t start=0,end=0;
  printf("Eneter the number of elements:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      a[i]=rand()%200;
    }
  printf("Generated elements are:\n");
  for(int i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  start = clock();
  quiksort(a,0,n-1);
  printf("Sorted elements are:\n");
  end = clock();
   for(int i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }

  printf("Time taken: %f",(end-start)/(double)CLOCKS_PER_SEC);
}