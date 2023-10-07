#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
  char name[30];
  char usn[20];
  int sem;
  struct node *left;
  struct node *right;
};

typedef struct node * Node;


Node insert_front(Node first)
{
  Node newnode;
  newnode=(Node)malloc(sizeof(struct node));
  newnode->left=NULL;
  newnode->right=NULL;
  printf("Enter Student details\n");
  printf("Enter the name:\n");
  scanf("%s",newnode->name);
  printf("Enter the usn:\n");
  scanf("%s",newnode->usn);
  printf("Enter the semester:\n");
  scanf("%d",&newnode->sem);
  if(first==NULL)
  {
    first=newnode;
    return first;
  }

  else
  {
    newnode->right=first;
    first->left=newnode;
    first=newnode;
    return first;
  }
}

void search(Node first)
{
  if(first==NULL)
  {
    printf("Empty Database\n");
    return;
  }

  else
  {
    char usn_no[20];
    printf("Enter the usn to search:\n");
    scanf("%s",usn_no);
    Node pres;
    pres=first;
    while(pres!=NULL && strcmp(usn_no,pres->usn)!=0)
    {
      pres=pres->right;
    }
    
    if(pres==NULL)
    {
      printf("Student not found\n");
    }

    else
    {
      printf("Student found\n");
    }
  }
  
}

void display(Node first)
{
  if(first==NULL)
  {
    printf("Empty Database\n");
  }

  else
  {
    Node pres;
    pres=first;
    printf("Name\t\t\tUSN\t\t\tSem\n");
    while(pres!=NULL)
      {
        printf("%s\t\t%s\t\t%d\n",pres->name,pres->usn,pres->sem);
        pres=pres->right;
      }
    printf("\n");
  }
}

int main()
{
  Node first=NULL;
  int op;
  for(;;)
    {
      printf("1.Insert \t 2.Search \t 3.Display\n");
      printf("Enter choice:\n");
      scanf("%d",&op);
      switch(op)
        {
          case 1: first=insert_front(first);
                  break;
          case 2: search(first);
                  break;
          case 3: display(first);
                  break;
          default:exit(0);
        }
    }
  return 0;
}