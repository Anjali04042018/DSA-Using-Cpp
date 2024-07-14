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

class solution{
    public:


int getLength(Node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node* findMiddle(Node* head){
    int len = getLength(head);
    int ans = len/2;
    Node* temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<< " ";
        temp= temp->next;
    }
    cout<< endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtHead(head,12);
    insertAtHead(head,15);
    insertAtHead(head,20);
    insertAtHead(head,25);
    insertAtHead(head,30);
    print(head);

    solution sol;
    Node* middle= sol.findMiddle(head);
    cout<< "Middle Node Value : "<< middle->data<< endl;
}