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

int search(Node *head,int x){
    int index=1;
    Node *curr = head;
    while( curr!=NULL){
        if(x==curr->data){
            return index;
        }
        else{
            index++;
            curr = curr->next;
        }
    }
    return -1;
};
int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20); 
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    int x;
    cin >> x;
    cout << search(head,x);

}