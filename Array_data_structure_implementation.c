#include<stdio.h>

void insert();
void deleteit();
void display();
int a[100],n;
int main()
{
    int i,s;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
while(1)
    {
    printf(" type 1 for insertion of an element\n type 2 for deletion of element\n type 3 for displaying the final array\n type 4 for exit");
    printf("Your choice\n");
    scanf("%d",&s);

        switch(s)
        {case 1 : insert();
        break;
        case 2 : deleteit();
        break;
        case 3 : display();
        break;
        case 4: exit(0);
        }
    }

}
void insert()
{
     int pos,i,value;
     printf("Enter the position where you would require to insert the element\n");
                scanf("%d",&pos);
                printf("Enter the value to insert\n");
                scanf("%d",&value);
                for(i=n-1;i>=pos-1;i--)
                {
                    a[i+1]=a[i];

                }
                a[pos-1]=value;
                    n=n+1;
}
void deleteit()
{   int pos,i;
    printf("Enter the position where you would require to delete the element\n");
                scanf("%d",&pos);
                for(i=pos-1;i<n;i++)
                {
                    a[i]=a[i+1];

                }
                n=n-1;
}
void display()
{   int i;
    printf("the final array is\n");
              for(i=0;i<n;i++)
              {
                  printf("%d\n",a[i]);
              }

    }

