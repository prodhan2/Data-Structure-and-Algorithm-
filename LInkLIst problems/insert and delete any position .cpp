#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int n) {
    struct node *t = (struct node *) malloc(sizeof(struct node));
    t->data = n;
    t->next = NULL;
    return t;
}

void insert_node(node *head) {
    cout << "How many nodes do you want to create?" << endl;
    int n, m;
    cin >> n;
    cout << "Enter the values for the nodes:" << endl;
    node *curr = head;
    for (int i = 0; i < n; i++) {
        cin >> m;
        curr->next = create_node(m);
        curr = curr->next;
    }
}


//void  delete_any(node *head , int m)
//{
//node *current = head;
//for(int i = 1;i<m;i++)
//{
//    current = current->next;
//}
//  node *t = current->next->next;
//  free(current->next);
//  current->next = t;
//}
void delete_any(node *head , int m) {
    node *current = head;
    for(int i = 1; i < m; i++) {
        current = current->next;
    }
    node *t = current->next->next;
    free(current->next);
    current->next = t;
}
 void insert_any_position(node *head)
 {
     cout<<"which position you insert ? and which number"<<endl;
     int k,l;
     cin>>k>>l;
     node *currentt = head ;
     node *h = create_node(l);
      for (int i = 1; i < k; i++)
      {
        currentt  = currentt ->next;
      }
      node *pre = currentt->next;
     h->next = pre;
     currentt->next = h;

 }


void print(node *head) {
    cout << "The linked list is: ";
    while (head->next != NULL) {
        cout << head->next->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    fast();
    struct node *head = (struct node *) malloc(sizeof(struct node));
    head->next = NULL;
    insert_node(head);
    print(head);
    cout<<"WHICH position you delete?"<<endl;

    int mm;
    cin>>mm;
    delete_any(head ,mm);
     print(head);

   cout<<"WHICH position you insert?"<<endl;

    insert_any_position(head);
     print(head);


    return 0;
}
