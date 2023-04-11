#include<stdio.h>
#define size 5
void insert_rear();
void insert_front();
void delet_rear();
void delet_front();
void display();
int q[size],rear=-1,front=0;
int main()
{

    int op;
    while(1)
    {
        printf("Menu:\n 1.insert rear \t 2.insert front\t 3.delete rear \t 4.delete front \t 5.display \t 6.exit\n");
        printf("Enter the choice:\n");
        scanf("%d",&op);
        switch(op)
        {

            case 1:insert_rear();
                   break;
            case 2:insert_front();
                   break;
            case 3:delet_rear();
                   break;
            case 4:delet_front();
                   break;
            case 5:display();
                   break;
            case 6:exit(0);
                   break;
        }
    }
}

void insert_rear()
{
    if(rear==size-1)
    {

        printf("Queue is full at rear\n");
        return;
    }
    else
    {

        int val;
        printf("Enter the value to insert\n");
        scanf("%d",&val);
        rear=rear+1;
        q[rear]=val;
    }
}

void insert_front()
{

    if(front==0 && rear==-1)
    {
       int val;
        printf("Enter the value to insert\n");
        scanf("%d",&val);
        rear=rear+1;
        q[rear]=val;
    }
    else if(rear==size-1 || front==0)
    {

        printf("Queue is full at front\n");
        return;
    }
    else
    {

        int val;
        printf("Enter the value to insert\n");
        scanf("%d",&val);
        front=front-1;
        q[front]=val;

    }
}

void delet_front()
{

    if(rear==-1 || front==rear+1)
    {
      printf("Queue is empty\n");
      return;
    }

    else
    {

        int val;
        val=q[front];
        printf("The deleted element is %d\n",val);
        front=front+1;
    }
}
void delet_rear()
{

    if(rear==-1 || front==rear+1)
    {
      printf("Queue is empty\n");
      return;
    }

    else
    {

        int val;
        val=q[rear];
        printf("The deleted element is %d\n",val);
        rear=rear-1;
    }
}

void display()
{

    if(rear==-1 || front==rear+1)
    {

        printf("Queue is empty\n");
    }
    else
    {


    printf("The elements are:\n");
    for(int i=front;i<=rear;i++)
    {

        printf("%d\t",q[i]);
    }
      printf("\n");
    }
}
