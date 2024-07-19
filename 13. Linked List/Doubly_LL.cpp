#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this-> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // Destructor

     Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "Memory free for node with data "<< val;
     }   
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp-> next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev= tail;
    tail = temp;
}

void InsertAtPosition(Node* &head,Node* &tail, int position, int data){

    // Insert at first position
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    // Insert Node at any position except first and last
    Node* temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }
    // Insert node at last position

    if(temp->next == NULL){
        InsertAtTail(tail,data);
        return;
    }

    Node* nodetoInsert = new Node(data);
    nodetoInsert-> next = temp-> next;
    temp->next->prev= nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}

void deleteNode(int position, Node* &head){
    // Deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp ->next ->prev = NULL;
        head = temp->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        // Delete any middle or last node

        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr -> prev = NULL;
        prev ->next= curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp-> data<< " ";
        temp = temp->next;
        }
    cout<< endl;
}
int main(){
    Node* node1 = new Node(10);
    // cout<< node1 -> data<< endl;
    // cout<< node1 -> prev<< endl;
    // cout<< node1 -> next<< endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head, 15);
    // InsertAtTail(tail,15);
    print(head);
    insertAtHead(head, 20);
    // InsertAtTail(tail,20);
    print(head);

    InsertAtPosition(head, tail,4,30);
    print(head);

    deleteNode(4,head);
    print(head);

}