#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *createnode(int n)
{
    node *m = (struct node*)malloc(sizeof(struct node));
    m->data = n;
    m->next = NULL;
    return m;
}

void LinklistA(node *head1)
{
   cout<<"How many numbers you want to insert?"<<endl;
   int k;
   cin>>k;
   node *current = head1;
   for(int i=0; i<k; i++)
   {
       int n; cin>>n;
       current->next = createnode(n);
       current = current->next;
   }
}

void LinklistB(node *head2)
{
   cout<<"How many numbers you want to insert?"<<endl;
   int k;
   cin>>k;
   node *current = head2;
   for(int i=0; i<k; i++)
   {
       int n; cin>>n;
       current->next = createnode(n);
       current = current->next;
   }
}

void PrintLinklistA(node *head1)
{
   node *current = head1->next;
   while(current != NULL)
   {
       cout<<current->data<<" ";
       current = current->next;
   }
   cout << endl;
}

void PrintLinklistB(node *head2)
{
   node *current = head2->next;
   while(current != NULL)
   {
       cout<<current->data<<" ";
       current = current->next;
   }
   cout << endl;
}

void mergeLinklist(node *head1, node *head2)
{
    node *current = head1;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = head2->next;
}

void PrintLinklistC(node *head3)
{
   node *current = head3->next;
   while(current != NULL)
   {
       cout<<current->data<<" ";
       current = current->next;
   }
   cout << endl;
}

int main()
{
    struct node *head1 = createnode(-1);
    struct node *head2 = createnode(-1);

    LinklistA(head1);
    LinklistB(head2);

    cout << "List A: ";
    PrintLinklistA(head1);

    cout << "List B: ";
    PrintLinklistB(head2);

    mergeLinklist(head1, head2);

    cout << "Merged List: ";
    PrintLinklistC(head1);

    return 0;
}
  //this is my own tecnic   🤣🤣🤣🤣
