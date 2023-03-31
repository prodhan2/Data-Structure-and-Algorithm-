
#include<bits/stdc++.h>
using namespace std;
#define   fast() ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

struct node {
 int data ;
 node *next;
 };

struct node *create_node(int n)
{
    node *m = (struct node*) malloc(sizeof(struct node));
    m->data = n;
    m->next = NULL;
    return m;
}
void user_input(node *head)
{
   cout<<"HOW MANY NODE YOU CRAETE"<<endl;
   int nn;
   cin>>nn;
   for(int i=0;i<nn;i++)
   {
       int t;
       cin>>t;
       head->next = create_node(t);
       head = head->next;

   }
}
 void print_input(node *head)
 {
    while(head->next != NULL)
    {
        cout<<head ->next->data <<" " ;
        head = head ->next;
    }
    cout<<endl;
 }
void first_delete( node *head)
{
    node *tmp = head->next->next;
    free(head ->next);
    head->next= tmp;

}
void last_delete( node *head)
{
    node *tmp = head;

    while( tmp ->next->next != NULL)
    {
        tmp = tmp->next;
    }
   free(tmp->next);
   tmp->next = NULL;

}

void position_node_add(node *head,int x,int y)
{
    node *k = create_node(y);

    while(x !=1)
    {
      head = head->next;
       x--;
    }
    k->next = head->next;
    head->next = k;
}
insert_last(node *head,int n)
{
  while(head->next !=NULL)
        {
         head = head->next;
        }
            head->next =create_node(n);
}

void search_number(node *head, int h) {
    while(head->next != NULL) {
        if(head->next->data == h) {
            cout << "YES THAT NUMBER IS FOUND" << endl;
            return;  // exit function after number is found
        }
        head = head->next;
    }
    cout << "NUMBER NOT FOUND" << endl;  // executed only if number is not found
}

int main()
{
fast();

 node *head = (struct node*) malloc(sizeof(struct node));
 user_input(head);
 cout<<"ALL inputs"<<endl;
 print_input(head);
first_delete(head);
cout<<"Delete First "<<endl;
print_input(head);
last_delete(head);
cout<<"delete LAST"<<endl;
print_input(head);
cout<<"which position and which number you add "<<endl;
int x,y;
cin>>x>>y;
   position_node_add(head,x,y);
print_input(head);

insert_last(head,100);
cout<<"INSERT LAST"<<endl;
print_input(head);

cout<<"insert a number that you can sesarch"<<endl;
int h;
cin>>h;
search_number(head,h);
return 0;

}
