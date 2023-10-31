#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void insert(int x,Node *node1,Node *node2){
      node1->data  =x;
      node1->next = node2;
}
void printlinked(Node *node)
{
    Node *curr = node;
    while (curr != NULL)
    {
        cout << (curr->data) << endl;
        curr = curr->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);

    head->next = temp1;
    temp1->next = temp2;
    int  num;
    cin >> num;
    Node *newhead;
    insert(num,newhead,head);

    printlinked(newhead);
}