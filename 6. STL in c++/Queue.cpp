#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;

    q.push(1);
    q.push(3);
    q.push(5);
    q.push(6);
    cout<<"Front Element "<< q.front() << endl;
    cout<< "Back Element "<< q.back()<< endl;
    cout<< "Size : "<< q.size()<< endl;
}