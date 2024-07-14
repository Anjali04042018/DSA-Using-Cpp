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
 void insertHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
 }
 void print(Node* head){
    Node* temp = head ;
    while(temp != NULL){
        cout<< temp ->data << " ";
        temp = temp ->next;
    }
    cout<< endl;
 }

 Node* removeDuplicate(Node* head){
    if(head == NULL){
        return NULL;
    }
   
    Node* curr = head;
    while(curr != NULL){
        if((curr ->next != NULL) && curr ->data == curr ->next ->data){
            Node* next_next = curr ->next ->next;
            Node* nodeToDelete = curr ->next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else{  // Not Equal
            curr = curr->next;
        }
    }
    return head;
 }
int main(){
    Node* head = new Node(10);
    insertHead(head, 12);
    insertHead(head, 12);
    insertHead(head, 15);
    insertHead(head, 20);
    insertHead(head, 20);
    print(head);
    head = removeDuplicate(head);
    print(head);
}