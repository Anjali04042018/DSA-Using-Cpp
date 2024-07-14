// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     // Create constructor

//     Node(int data){
//         this -> data = data ;
//         this -> next = NULL;
//     }

//     //  Destructor
//     ~Node(){
//         int value = this ->data;
//         // Memory free
//         if(this -> next != NULL){
//             delete next;
//             this-> next = NULL;
//         }
//         cout<< "Memory is free for node with data "<< value<< endl;
//     }
// };

// void insertAtHead(Node* &head,int data){
//     // New node created
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head = temp;
// }

// void InsertAtTail(Node* &tail , int data){
//     Node* temp = new Node(data);
//     tail->next = temp;
//     tail = temp;
// }

// void InsertAtPosition(Node* &head,Node* &tail,int position, int data){

//     // Insert at first Position
//     if(position == 1){
//         insertAtHead(head, data);
//         return;
//     }

//     // Insert at any position
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt< position-1){
//         temp = temp -> next;
//         cnt++;
//     }
    
//     // Insert at Last position
//     if(temp -> next == NULL){
//         InsertAtTail(tail,data);
//         return;
//     }
//     // Creating a node for data 

//     Node* nodetoInsert = new Node(data);

//     nodetoInsert ->next = temp-> next;
//     temp -> next = nodetoInsert;
// }

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp->data << " ";
//         temp = temp->next;
//     }
//     cout<< endl;
// }

// void deleteNode(int position, Node* &head){

//     // deleting first or start node
//     if(position == 1){
//         Node* temp = head;
//         head = head -> next;
//         // Memory free start node
//         temp -> next = NULL;
//         delete temp;
//     }
//     else{
//         // Deleting any middle node or last node
//         Node* current = head;
//         Node* previous = NULL;

//         int cnt = 1;
//         while(cnt<position){
//             previous = current;
//             current = current->next;
//             cnt++;
//         }
//         previous->next = current ->next;
//         current->next = NULL;
//         delete current;
//     }
// }
// int main(){
//     // Created a new node 
//     Node* node1 = new Node(10);
//     // cout<< node1 -> data << endl;
//     // cout<< node1 -> next << endl;


//     // head pointed to node1

//     Node* head = node1;
//     Node* tail = node1;
   
//     print(head);
//     // insertAtHead(head,15);
//     InsertAtTail(tail,15);
//     print(head);
//     // insertAtHead(head, 20);
//     InsertAtTail(tail,20);
//     print(head);

//     InsertAtPosition(head,tail, 4, 40);
//     print(head);

//     cout<< "Head " << head-> data<< endl;
//     cout<< "Tail " << tail->data << endl;

//     deleteNode(1,head);
//     print(head);
// }





#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this ->next = NULL;
    }
};
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp ->next = head;
    head = temp;
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp ->data<< " ";
        temp = temp ->next;
    }
    cout<< endl;
}

Node* reverse(Node* &head){
    if(head == NULL || head ->next == NULL){
        return head;
    }
    Node* smallHead = reverse(head->next);
    head ->next ->next = head;
    head ->next = NULL;
    return smallHead;
}

Node* reverse1(Node* &head){
    if(head == NULL){
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(curr != NULL){
    next = curr ->next;
    curr ->next = prev;
    prev = curr;
    curr = next;
    }
    return prev;

}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtHead(head,12);
    insertAtHead(head,15);
    insertAtHead(head,20);
    print(head);

    head = reverse(head);
    print(head);
    head = reverse1(head);
    print(head);
}


