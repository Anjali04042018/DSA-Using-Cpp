#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertToHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
Node* reverse(Node* &head){
    if(head == NULL || head ->next == NULL){
        return head;
    }
    Node* smallHead = reverse(head->next);
    head -> next ->next = head;
    head ->next = NULL;
    return smallHead;
}

Node* kReverse(Node* &head, int k){
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
    while(curr != NULL && count < k ){
      next = curr->next;
      curr ->next = prev;
      prev= curr;
      curr = next;
      count++;
    }
    if(next != NULL){
        head->next = kReverse(next,k);
    } 
    return prev;
}


void print(Node* &head){
    Node* temp = head ;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    insertToHead(head, 12);
    insertToHead(head, 15);
    insertToHead(head,20);
   insertToHead(head,25);
    print(head);
    // head = reverse(head);
    // print(head);
    head = kReverse(head,2);
    print(head);
}

