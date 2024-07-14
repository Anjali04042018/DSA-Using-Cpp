#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(12);
    q.push(15);
    q.push(20);

    // q.pop();
    cout<< "Size of Queue is : "<< q.size()<< endl;
    cout<< "Front element is : "<< q.front()<< endl;
    cout<< "Front element is : "<< q.front()<< endl;


    if(q.empty()){
        cout<< "Queue is Empty"<< endl;
    }
    else{
        cout<< "Queue is not Empty"<< endl;
    }
}