#include<stdio.h>
#define size 10
 void push();
 void pop();
 void display();
 int top=-1,s[size];
 int main()
 {
     int op;
    // printf("Enter the size\n");
    // scanf("%d",&size);

     while(1)
     {
        printf(" type 1 for push\n type 2 for pop\n type 3 for display\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:push();
                  break;
            case 2:pop();
                  break;
            case 3:display();
                  break;
            default:exit(0);
        }

     }
 }
  void push()
 {
     if(top==size-1)
     {
         printf("Stack is full \n");
         return;
     }

     else
     {
         int ele;
         printf("Enter the element to initialize\n");
         scanf("%d",&ele);
         top=top+1;
         s[top]=ele;
         return;
     }
 }

void pop()
 {
     if(top==-1)
     {
         printf("Stack is empty\n");
         return;
     }

     else
     {
         int val;
         val=s[top];
         printf("Deleted element is %d\n",val);
         top=top-1;
         return;
     }
 }

void display()
 {
     if(top==-1)
     {
         printf("Stack is empty\n");
         return;
     }
      else
      {
          int i;
          for(i=top;i>=0;i--)
          {
              printf("%d\t",s[i]);
          }
        printf("\n");
          return;
      }
 }
