#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int a[],int l,int m,int r )
{
  int i,j,k,t[500];
  i=l;
  j=m+1;
  k=l;
  while(i<=m && j<=r)
    {
      if(a[i]<a[j])
      {
        t[k++]=a[i++];
      }

      else
      {
        t[k++] = a[j++];
      }
    }

  while(i<=m)
    {
      t[k++]=a[i++];
    }

  while(j<=r)
    {
      t[k++]=a[j++];
    }

  for(i=0;i<=r;i++)
    {
      a[i]=t[i];
    }
}

void merge_sort(int a[],int l,int r)
{
  int mid;
  if(l<r)
  {
    mid = (l+r)/2;
    merge_sort(a, l, mid);
    merge_sort(a, mid+1, r);
    merge(a,l,mid,r);
  }
}

void main()
{
  int n,a[500];
  clock_t start=0,end=0;
  printf("Enter the number of elements:\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      a[i] = rand()%200;
    }
  printf("Generated elements are:\n");
  for(int i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  start=clock();
  merge_sort(a,0,n-1);
  end=clock();
  printf("Sorted elements are:\n");
  for(int i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }

  printf("Time taken is : %f\n",(end-start)/(double)CLOCKS_PER_SEC);
}
