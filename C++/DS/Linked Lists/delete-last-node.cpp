#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *lastNode(Node *head){
    if (head == NULL)
        return NULL;
    else
    {
        Node *curr = head;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        delete (curr->next);
        curr->next = NULL;
        return head;
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20); 
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    Node *newhead;
    newhead = lastNode(head);
    while (newhead != NULL)
    {
        cout << newhead->data << endl;
        newhead = newhead->next;
    }
}