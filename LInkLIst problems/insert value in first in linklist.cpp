
#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node *next;
};

struct node *Create_node(int n)      //create node 
{
   struct node  *m = (struct node *) malloc(sizeof(struct node));
    m->data = n;
    m->next = NULL;
    return m;
}
void InsertValue(struct node * list)
{
int t;
cout<<" How many Node you Create "<<endl;  // how many node me create
cin>>t;
 while(t--)             // input value from iuser
 {
     int x;
     cin>>x;
     list->next = Create_node(x);
     list = list->next;
 }


}

void First_insert(struct node *list)     // first  value insert
{
    int v ;
    cout<<"Insert a new number of first"<<endl;
    cin>>v;
    struct node *t = Create_node(v);
    t->next = list->next;
    list->next = t;

}



void PrintValue(struct node * list)           // print inserting value
{
cout<<"Your value are ="<<endl;
       while( list->next !=NULL)
       {
           cout<<list->next ->data <<endl;
           list = list->next;
       }
}
int main()              // his is main section
{

    struct node *start = (struct node *) malloc (sizeof(struct node));
    InsertValue(start);
    First_insert(start);
    PrintValue(start);


}
