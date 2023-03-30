#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
int data;
node *next;};

struct node *create_node(int n)
{
   node *t = (struct node *) malloc(sizeof(struct node));
   t->data = n;
   t->next = NULL;
   return t;

}
void input_node(node *head)
{
    cout<<"how many node you create "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t ;
        cin>>t;
        head ->next = create_node(t);
        head = head->next;
    }
}

void insert_node_at_position(node *head, int pos, int num) {
//    pos--;
    while(pos != 1) {
        head = head->next;
        pos--;
    }
    struct node *t = create_node(num);
    t->next = head->next;
    head->next = t;
}

void delete_first_node(node *head)
{
    node *temp = head->next ->next;
    free(head->next);
    head->next = temp;

}
void delete_last_node(node *head){
          node *t = head;
    while(t->next ->next != NULL)
    {
        t = t->next;
    }
    free(t->next);
    t->next = NULL;
}


void print_node( node *head)
{
  while(head->next != NULL)
  {
      cout<<head ->next -> data <<" ";
      head = head->next;
  }
  cout <<endl;
}
int main()
{
fast();
struct node *head =  (struct node *) malloc(sizeof(struct node));
input_node(head);
cout<<"PRINT ALL NODE"<<endl;
print_node(head);
 insert_node_at_position( head, 3, 56 );
 cout<<"PRINT insert requried position after list"<<endl;
print_node(head);
delete_first_node(head);
cout<<"delete first NODE after list"<<endl;
print_node(head);
delete_last_node(head);
cout<<"delete last NODE after list"<<endl;
print_node(head);

return 0;
}

