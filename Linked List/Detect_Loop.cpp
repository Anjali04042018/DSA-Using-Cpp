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
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool delectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){

        // Cycle is present 
        if(visited[temp] == true){
            cout<< "Present on element "<< temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 12);
    insertAtHead(head , 15);
    insertAtHead(head, 20);
    print(head);

    head->next->next = head;

    if(delectLoop(head)){
        cout<< "Loop is Present"<< endl;
    }
    else{
        cout<< "Loop is not present"<< endl;
    }

}