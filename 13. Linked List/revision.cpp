#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
   Node* temp = new Node(data);
   temp->next = head;
   head = temp;
}
void insertAtTail(Node* &tail, int data){
   Node* temp = new Node(data);
   tail->next = temp;
   tail = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data<< " ";
        temp = temp ->next;
    }
    cout<< endl;
}
int main(){
    Node* node1 = new Node(10);
    // cout<< node1<< endl;

    // Node* head = node1;
    // print(head);
    // insertAtHead(head,12);
    // print(head);
    // insertAtHead(head,15);
    // print(head);
    Node* tail = node1;
    print(tail);
    insertAtTail(tail,12);
    print(tail);
    insertAtTail(tail,15);
    print(tail);
}