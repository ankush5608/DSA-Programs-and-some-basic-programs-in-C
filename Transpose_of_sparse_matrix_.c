#include<stdio.h>
void transpose();
void display();
struct term
{
    int row;
    int col;
    int val;
};
struct term a[10],b[10];
int main()
{

   int i;
    printf("Enter the number of rows columns and values\n");
    scanf("%d %d %d",&a[0].row,&a[0].col,&a[0].val);
    for(i=1;i<=a[0].val;i++)
    {
        printf("Enter the triplet\n");
        scanf("%d %d %d",&a[i].row,&a[i].col,&a[i].val);
    }
    transpose();
    display();
}
 void transpose()
{
    int i,j,k=1;
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].val=a[0].val;
    // for(i=0;i<a[0].col;i++)
    // {
        for(j=1;j<=a[0].val;j++)
        {
            b[k].row=a[j].col;
            b[k].col=a[j].row;
            b[k].val=a[j].val;
            k++;
        }
    // }
}

void display()
{   int i;
    printf("The transpose of the matrix is\n");
    printf("row\tcol\tval");
    for(i=0;i<=b[0].val;i++)
    {
        printf("\n");
        printf("%d \t%d \t%d\n",b[i].row,b[i].col,b[i].val);
    }
}



