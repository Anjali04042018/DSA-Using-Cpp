#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
    // Destructor

    ~Node(){
        int value = this->data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "Memory is free for node with data "<< value << endl;

    }
};

void InsertNode(Node* &tail , int element,int data){

    // Empty list

if(tail == NULL){
    Node* newNode = new Node(data);
    tail = newNode;
    newNode-> next = newNode;
}
else{
    // Non- empty list

    // Assuming that the element is present in the list.
Node* curr = tail;
while(curr-> data != element){
    curr = curr->next;
}

// element found -> curr is representing element value

Node* temp = new Node(data);
temp -> next = curr -> next;
curr-> next = temp;

}

}

void deleteNode(Node* &tail, int value){
    // Empty list 
    if(tail == NULL){
        cout<< "List is empty, please check again "<< endl;
        return;
    }
    else{
        // Non Empty
        Node* prev = tail;
        Node* curr = prev ->next;
        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev ->next = curr ->next;

        // 1 Node Linked List
        if(curr == prev){
            tail = NULL;
        }
        // >= 2 Node Linked list
        else if(tail == curr){
            tail= prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* tail){
    Node* temp = tail;
    // Empty list
    if(tail == NULL){
        cout<< "List is Empty "<< endl;
        return;
    }

    do{
        cout<< tail-> data << " ";
        tail = tail-> next;

    }while(tail != temp);
    cout<< endl;
}

int main(){
    Node* tail = NULL;
    InsertNode(tail,5,3);
    print (tail);
    InsertNode(tail,3,5);
    print(tail);
    InsertNode(tail,5,7);
    print(tail);
    InsertNode(tail,7,9);
    print(tail);
    InsertNode(tail,5,6);
    print(tail);
    InsertNode(tail,9,10);
    print(tail);
    InsertNode(tail,3,4);
    print(tail);

    deleteNode(tail,5);
    print(tail);


}
