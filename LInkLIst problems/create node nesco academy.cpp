
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
int data;
struct node *link;};

//node count
void count_node(struct node *head)
{
  int count =0;
  if(head == NULL)
  {
      cout<<"LInklist is Empty"<<endl;
  }
  struct node *ptr = NULL;
  ptr = head;
  while(ptr != NULL)
  {
      count++;
      ptr = ptr->link;
  }
  cout<<"HERE NODE HAVE:  "<<count<<endl;
}

int main()
{
fast();
struct node *head = (struct node *) malloc(sizeof(struct node));
head->data = 44;
head ->link = NULL;
struct node *current = (struct node *) malloc(sizeof(struct node));
current->data = 48;
current ->link = NULL;
 head ->link = current;
 //add value last node
 current = (struct node *) malloc(sizeof(struct node));
current->data = 55;
current ->link = NULL;
 head ->link ->link = current;    //define link adderss



//   struct node *ptr = NULL;
//   ptr = head;
//   while(ptr != NULL)
//   {
//       cout<<ptr->data<<endl;
//       ptr = ptr->link;
//   }

count_node(head);

return 0;
}
