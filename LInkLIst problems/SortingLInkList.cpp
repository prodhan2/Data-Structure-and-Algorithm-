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
//use for loop
//void sort_linked_list(node *head) {
//    node *curr, *next1;
//    int tmp;
//    for (curr = head->next; curr != NULL; curr = curr->next) {
//        for (next1 = curr->next; next1 != NULL; next1 = next1->next) {
//            if (curr->data > next1->data) {
//                tmp = curr->data;
//                curr->data = next1->data;
//                next1->data = tmp;
//            }
//        }
//    }
//}


void sort_linked_list(node *head)
{
    node *current = head->next ,*next1;
    while(current !=NULL)
    {
        next1 = current->next;
        while(next1 != NULL)
        {
            if(current->data > next1->data)
            {
                int tmp = current->data;
                 current->data = next1->data;
                 next1->data = tmp;

            }
            next1 = next1->next;
        }
       current = current->next;

    }
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
    sort_linked_list(head);
    print(head);
    return 0;
}
