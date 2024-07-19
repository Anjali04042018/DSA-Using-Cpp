#include<iostream>
#include<map>
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
    Node*temp = new Node(data);
    temp->next = head;
    head = temp;
}

Node* floyd(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast ->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow ->next;
        if(fast == slow){
            cout<< "Present At : "<< slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node* startingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floyd(head);
    Node* slow = head;
    if(slow != intersection ){
        slow= slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeNode(Node* head){
    if(head == NULL){
        return ;
    }
    Node* startOfLoop = startingNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp ->next = NULL;

}

void print(Node* head){
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

    insertAtHead(head,12);
    insertAtHead(head, 15);
    insertAtHead(head, 20);
    print(head);
    head->next ->next =  head;
    if(floyd(head)){
        cout<< "Loop is present"<<endl;
    }
    else{
        cout<< "Loop is not present"<< endl;
    }
    head = startingNode(head);
    cout<< "Starting Node is : "<< head->data<<endl;
    removeNode(head);
    print(head);
}


