
#include <bits/stdc++.h>
using namespace std;

// Define a structure for a linked list node
struct Node {
    int data;
    Node *next;
};

// Function to add a node at the beginning of a linked list
Node* addFirst(Node* head, int data) {
    // Create a new node
    Node* newNode = new Node;

    // Set the data and next pointer of the new node
    newNode->data = data;
    newNode->next = head;

    // Update the head of the linked list
    head = newNode;

    return head;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    // Initialize the head of the linked list
    Node* head = NULL;

    // Add nodes to the beginning of the linked list
    head = addFirst(head, 3);
    head = addFirst(head, 2);
    head = addFirst(head, 1);

    // Print the linked list
    printList(head);

    return 0;
}
