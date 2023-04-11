#include<stdio.h>
#define size 20
int q[size],rear=-1,front=0;
void insert();
void deleteit();
void display();
int main()
{
    while(1)
    {
        int op;
        printf(" type 1 to insert\n type 2 for delete\n type 3 for display\n ");
        printf("Enter choice\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: insert();
                    break;
            case 2: deleteit();
                    break;
            case 3: display();
                    break;
            default: exit(0);
        }
    }
}

void insert()
{
    if(rear==size-1)
    {
        printf("Queue is full\n");
        return;
    }
    else
    {
        int data;
        printf("Enter the value to insert\n");
        scanf("%d",&data);
        rear=rear+1;
        q[rear]=data;
        return;
    }
}

void deleteit()
{
    if(rear==-1)
    {
        printf("Queue is empty\n");
        return;
    }

    else
    {
        int val;
        val=q[front];
        printf("The element deleted is %d \n",val);
        front=front+1;
        return;
    }
}

void display()
{

    int i;

    if(front==rear+1)
    {
        printf("queue is empty\n");
    }

    else
    {


    for(i=front;i<=rear;i++)
    {
        printf("%d\t",q[i]);
    }

    printf("\n");
    return;
    }
}
