#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
void linkedList(struct node* head)
{
   head = NULL;
}
struct node* createNode(int x)
{
     struct node* temp = (struct node*) malloc (sizeof(struct node));
     temp -> data = x;
     temp ->next = NULL;
     return temp;
}

struct node* insert(struct node* head, int x)
{
    struct node * temp = createNode(x);
    temp -> next = head;
    head = temp;
    return head;
}
struct node* insertAtP(struct node* head, int data, int pos, int n)
{
    struct node* temp = head;
    if (pos > n)
    {
        printf("Position is too big");
        return NULL;
    }
    else if (pos == 0)
    {
        insert(head, data);
    }
    else{
       while(pos -1 != 0)
       {
          pos --;
          temp = temp -> next;
       }
       struct node * a = createNode(data);
       a -> next = temp -> next; 
       temp ->next = a;
       return temp;
    }
}
struct node* deleteNodeAtP(struct node* head, int pos, int n)
{
    struct node* temp = head;
    if (pos > n)
    {
       printf("Position is too big");
       return NULL;
    }
    else if (pos == 0)
    {
      head = temp -> next ;
      free(temp);  
      return head;
    }
    else
    {
      for (int i = 0 ; i < pos-1 ; i++)
      {
         temp = temp -> next;
      }
      struct node *temp1  = temp -> next;
      temp -> next = temp1 -> next;
      free(temp1);
      return head;
    }
    
}
void print(struct node * head)
{
   struct node* temp = head;
   while(temp != NULL)
   {
     printf("%d ", temp ->data);
     temp = temp -> next;
   }
   printf("\n");
}

int main()
{
   struct node* head;
   linkedList(head);
   int n;
   printf("How many number:\n");
   scanf("%d",&n);
   for (int i = 0 ; i < n ; i++)
   {
      int x;
      printf("Enter the number: ");
      scanf("%d",&x);
      head = insert(head,x);
   }
   head = insertAtP(head,10,1,5);
   head = deleteNodeAtP(head, 1, 5);
   print(head);
}