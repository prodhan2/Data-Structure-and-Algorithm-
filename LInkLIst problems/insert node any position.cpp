

#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node
{
   int data;
   struct node *next;
   };

  struct node *insert_last(node *head ,int n)
   {
       struct node *num = (struct node *) malloc(sizeof(struct node));
       num->data  = n;
       num ->next = NULL;

       struct node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = num;
    return head;
   }

void print_node(node *head)
   {
       while( head != NULL)
       {
           cout<<head->data <<" ";
          head = head ->next;
       }
   }
void at_position(node *head,int num,int pos)
{
pos--;
  struct node *m = (struct node *) malloc(sizeof(struct node));;
  m->data = num;
  m->next = NULL;

while(pos != 1)
{
   head = head ->next;
   pos--;
}
m->next = head ->next;
head ->next = m;
}

int main()
{
fast();
struct node *head = (struct node *) malloc(sizeof(struct node));
head ->data = 33;
head ->next = NULL;
struct node *first= (struct node *) malloc(sizeof(struct node));
first->data = 38;
first->next = NULL;
head ->next = first;

insert_last(head ,44);
insert_last(head ,48);
insert_last(head ,50);
at_position(head,66,3);
print_node(head);

return 0;
}
