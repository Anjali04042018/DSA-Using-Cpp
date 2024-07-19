#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int size;
    int *arr ;
    int qfront;
    int rear;
    Queue(int size){
        this ->size = size;
        arr= new int[size];
        qfront =0;
        rear= 0;
    }

    void enqueue(int data){
    if(rear == size){
        cout<< "Queue is Full"<< endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}

int dequeue(){
    if(front == rear){
        return -1;
    }
    else{
        int ans = arr[front];
        arr[front] = -1;
        front++;
        if(front == rear){
            front = 0;
            rear =0;
        } 
        return ans;
    }
}
int front(){
    if(front == rear){
        return -1;
    }else{
        return arr[front];
    }
}
bool isEmptya(){
    if(front == rear){
        return true;
    }
    else{
        return false;
    }
}

};


int main(){
    Queue q(4);
    q.enqueue(10);
    q.enqueue(20);
    cout<< q.front();
}