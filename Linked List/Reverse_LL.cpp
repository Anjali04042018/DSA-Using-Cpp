#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
  
    Node(int data){
        this-> data = data;
        this -> next = NULL;
    }
};

void InsertNode(Node* &head, int data){
    Node* temp= new Node(data);
    temp->next = head;
    head=temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
}

// Using Recurssion

Node* reverse1(Node* head){
    if(head== NULL || head->next == NULL){
        return head;
    }
    Node* chotaHead = reverse1(head ->next);
    head ->next -> next = head;
    head -> next = NULL;
    return chotaHead;
}



void reverse(Node* &head, Node* &curr, Node* prev){
    // base case
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr-> next;
    reverse(head,forward,curr);
    curr -> next = prev;
}

Node* reverseLinkedList(Node* head){

    // For Reverse 
    // Node* prev = NULL;
    // Node* curr  = head;
    // reverse(head,curr,prev); 
    // return head;

    reverse1(head);

    // Normal method

    // if(head == NULL || head -> next == NULL){
    //     return head;
    // }

    // Node* prev = NULL;
    // Node* curr  = head;
    // Node* forward = NULL;
   
    // while(curr != NULL){
    //     forward = curr->next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
    // }
    // return prev;

    
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    InsertNode(head,15);
    InsertNode(head, 20);
    cout<< "Original Linked List : ";
    print(head);
    // head = reverseLinkedList(head);
    // cout<< "Reverse Linked List : ";
    // print(head);
    // head = reverse1(head);
    // print(head);
}