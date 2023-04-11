#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,a;
    printf("Enter size\n");
    scanf("%d",&n);
    ptr= (int*)malloc( n*sizeof(int));
    if(ptr==NULL)
    printf("Malloc is not allocated\n");
    else
    {
        printf("Enter the elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
        }

        printf("Elements are: \n");

        for(i=0;i<n;i++)
        {
            printf("%d\t",*(ptr+i));
        }

         printf("\nWill you like to reallocate\n");
    printf("if yes type 1\n");
    scanf("%d",&a);
    if(a==1)
    {
        int c;
        printf("Enter the new size you want to store\n");
        scanf("%d",&c);
        ptr=(int*)realloc(ptr,c*sizeof(int));
        if(ptr==NULL)
    printf("Malloc is not allocated\n");
    else
    {
        printf("Enter the elements\n");
        for(i=0;i<c;i++)
        {
            scanf("%d",ptr+i);
        }

        printf("Elements are: \n");

        for(i=0;i<c;i++)
        {
            printf("%d\t",*(ptr+i));
        }


    }
    }
}
return 0;
}
