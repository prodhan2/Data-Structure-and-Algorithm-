#include<bits/stdc++.h>
using namespace std;

// Define the struct for the linked list node
struct node {
    int data;
    struct node *next;
};

// Function to add a new node at the end of the linked list
void add_at_end(struct node *head , int num) {
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node *) malloc(sizeof(struct node));
    temp->data= num;
    temp->next = NULL;
    while( ptr->next !=NULL) {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

// Function to print the linked list
void print_linklist(struct node *head) {
    struct node *ptr = head;
    while(ptr !=NULL) {
        cout<< ptr->data <<endl;
        ptr = ptr->next;
    }
}

// Main function
int main() {
    // Create the head node of the linked list
    struct node *head =(struct node*) malloc(sizeof(struct node));
    head ->data = 44;
    head ->next = NULL;

    // Create the second node of the linked list
    struct node *second= (struct node*)malloc(sizeof(struct node));
    second->data = 47;
    second->next = NULL;

    // Link the head and second node of the linked list
    head->next = second;

    // Add a new node at the end of the linked list
    add_at_end(head,90);

    // Print the linked list
    print_linklist(head);

    return 0;
}
