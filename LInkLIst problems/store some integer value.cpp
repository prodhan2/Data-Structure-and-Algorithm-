#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *next;
  };
struct node *create_node (int n)
{
    struct node  *a = (struct node *) malloc (sizeof(struct node));
    a->data = n;
    a->next = NULL;
    return a;


}
void makeList(struct node *list)
{
    int x,num;
    cout<< " How many Node you create ?"<<endl;
    cin>>x;
     for(int i =0;i<x;i++)
     {   cin>>num;
        list->next = create_node(num);
        list = list->next;
`
     }

}
void printlist(struct node *list)
{
    cout<<" list contains = "<<endl;
    while( list ->next !=NULL)
    {
        cout<<list->next->data <<endl;
        list = list ->next;
    }
}

int main()
{
struct node *start = (struct node *) malloc(sizeof(struct node));
makeList(start);
printlist(start);

}
