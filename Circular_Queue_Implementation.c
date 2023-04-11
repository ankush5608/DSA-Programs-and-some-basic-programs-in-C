#include<stdio.h>
#define size 4
int q[size],rear=-1,front=0,count=0;
void insert(int val);
void deleteit();
void display();
int main()
{
    int op;
    while(1)
    {   int val;
        printf("Enter 1 for insert\nEnter 2 for delete\nEnter 3 for display\n");
        printf("Enter choice\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: printf("Enter the value\n");
                    scanf("%d",&val);
                    insert(val);
                    break;
            case 2: deleteit();
                    break;
            case 3: display();
                    break;

        }
    }
}

void insert(int val)
{
    if(count==size)
    {
        printf("Queue is full\n\n\n\n");
        return;
    }



    else
    {
        rear=(rear+1)%size;
        q[rear]=val;
        count++;
        //printf("%d",q[rear]);
    }
}
void deleteit()
{
    if(count==0)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        int val;
        val=q[front];
        printf("Deleted element is %d\n",val);
        front=(front+1)%size;
        count--;
    }
}

void display()
{
    if(count==0)
    {
        printf("Queue is empty\n");
        return;
    }

    else
    {
        int i,f;
        f=front;


        for(i=1;i<=count;i++)
        {
          printf("%d\t",q[f]);
          f=(f+1)%size;
          //printf("%d",front);
        }
        printf("\n");
    }
}