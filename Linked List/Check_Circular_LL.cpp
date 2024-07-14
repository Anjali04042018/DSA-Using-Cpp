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

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// bool isCircular(Node* head){
//     if(head == NULL){
//         return true;
//     }
    
//     Node* temp = head->next;
//     while(temp != NULL && temp != head){
//         temp = temp->next;
//     }
//     if(temp == NULL){
//         return false;
//     }
//     if(temp== head){
//         return true;
//     }
// }


bool isCircular(Node* &head){
    if(head == NULL){
        return true;
    }
    Node* temp = head->next;
    while( temp!= NULL && temp != head){
        temp = temp->next;
    }
    if(temp == NULL){
        return false;
    }
    return true;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<< " ";
        temp = temp->next;

    }
    cout<< endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 20);
    print(head);
    head->next->next = head;
    if(isCircular(head)){
        cout<< "Linked list is Circular"<<endl;
    }
    else{
        cout<< "Linked list is not Circular"<<endl;
    }
}