
#include<bits/stdc++.h>
using namespace std;
struct node{
      long data ;
      struct node *next;
      };
struct node *create_node(int n)
{
     struct node *m = (struct node *) malloc(sizeof (struct node));
     m ->data = n;
     m ->next = NULL;
         return m;
}
void getNUmbers(struct node *list)
{
    int n;
    cout<< " How many node you print ?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        list->next = create_node(x);
        list = list->next;


    }

}
void printNumbers(struct node *list)
{
    cout<< " Long numbers are ="<<endl;
    while(list->next != NULL)
    {
        cout<<list->next->data<<endl;
        list = list->next;
    }
}

int main()
{
    struct node *start = (struct node *) malloc(sizeof(struct node));
    getNUmbers(start);
    printNumbers(start);

}
