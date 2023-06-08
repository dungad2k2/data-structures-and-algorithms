#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node* next;
    struct node* prev;
};
void createDoubleLinkedList(struct node* head)
{
    head == NULL;
}
struct node* createNode(int data)
{
    struct node* head = (struct node*) malloc (sizeof(struct node));
    head -> data = data;
    head -> next = NULL;
    head -> prev = NULL;
    return head;
}
struct node* insert(struct node* head, int data)
{
    struct node * temp = createNode(data);
    temp -> next = head;
    temp -> prev = NULL;
    head = temp;
    return head;
}
struct node* insertAtPosition(struct node* head, int data, int pos, int *n)
{
        struct node* temp = head;
        if (pos > *n)
        {
            printf("position is too big");
            return NULL;
        }
        else if (pos == 0)
        {
            *n ++ ;
            return insert(head, data);
        }
        else{
            for (int i=0 ; i < pos - 1 ; i++)
            {
                temp = temp -> next;
            }
            struct node * a = createNode(data);
            struct node * temp1 = temp->next;
            temp1 -> prev = a;
            temp -> next = a;
            a -> next = temp1;
            a -> prev = temp;
            *n ++;
            return head; 
        }

}
struct node* deleteAtPos(struct node* head, int pos, int *n)
{
    struct node* temp = head;
    if (pos > *n )
    {
        printf("Position is too big");
    }
    else if (pos == 0)
    {
        head = temp -> next ;
        head -> prev = NULL;
        free(temp);
        *n --;
        return head;
    }
    else
    {
        for (int i = 0 ; i < pos - 1 ; i ++)
        {
            temp = temp -> next ;
        }
        struct node* temp3 = temp -> next ;
        struct node * temp2  = temp3 -> next ;
        temp -> next = temp2;
        temp2 -> prev = temp;
        free(temp3);
        *n --;
        return head;
    }
}
void print(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
       
    }
    printf("\n");
}
int main()
{
   struct node* head;
   createDoubleLinkedList(head);
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
   head = insertAtPosition(head, 10, 1 , &n);
   head = deleteAtPos(head,1,&n);
   print(head);

}