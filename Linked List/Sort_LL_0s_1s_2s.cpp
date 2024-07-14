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
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data<< " ";
        temp = temp->next;
    }
    cout<< endl;
}

Node* sortList(Node* head){
    int zeroCount =0;
    int oneCount = 0;
    int twoCount =0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            zeroCount ++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
              temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
              temp->data = 2;
            twoCount--;
        }
        temp = temp ->next;
    }
    return head;
}
    // Second Method


Node* sortList1(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    //  Create separate list 0s, 1s and 2s

    Node* curr = head{
        while(curr != NULL){
            int value = curr -> data;
            if(value == 0){
                insertAtTail(zeroTail, curr);
            }
            else if(value == 1){
                insertAtTail(oneTail, curr);
            }
            else if(value == 2){
                insertAtTail(twoTail, curr);
            }
            curr = curr ->next;
        }
        // Merge Linked list

        // Is list not empty
        if(oneHead ->next != NULL){
            zeroTail ->next = oneHead ->next;
        }
        else{
            // is list ->empty
            zeroTail ->next = oneHead->next;
            
        }
    }
}
int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    insertAtHead(head,1);
    insertAtHead(head,0);
    insertAtHead(head,2);
    insertAtHead(head,0);
    insertAtHead(head,1);
    print(head);
    head = sortList(head);
    print(head);
}