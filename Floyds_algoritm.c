#include <stdio.h>
void read_adjacency(int a[10][10],int n);
void display(int a[10][10],int n);
void floyds(int a[10][10],int n);

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

void display(int a[10][10],int n)
{
   printf("The adjacency matrix is:\n");
   for(int i=0;i<n;i++)
     {
       for(int j=0;j<n;j++)
         {
           printf("%d\t",a[i][j]);
         }
       printf("\n");
     }
}

void floyds(int a[10][10],int n)
{
  for(int k=0;k<n;k++)
    {
      for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
            {
              a[i][j] = (a[i][j]<(a[i][k]+a[k][j])?a[i][j]:(a[i][k]+a[k][j]));
            }
        }
    }
}
int main(void) {

  int a[10][10], n;
  printf("Enter the number of vertices:\n");
  scanf("%d",&n);
  printf("Enter the elements of adjacency matrix:\n");
  read_adjacency(a,  n);
  printf("Input:\n");
  display(a,n);
  printf("The direct and indirect paths from all the vertices are:\n");
  floyds(a,n);
  display(a,  n);
  return 0;
}