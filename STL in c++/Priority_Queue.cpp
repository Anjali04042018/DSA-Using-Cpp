#include<iostream>
#include<queue>       
using namespace std;

int main(){
     priority_queue<int>maxHeap;
     maxHeap.push(1);
     maxHeap.push(9);
     maxHeap.push(5);
     maxHeap.push (10);
     maxHeap.push(0);

     cout<< "Size is "<< maxHeap.size()<< endl;

     for(int i = 0;i<maxHeap.size();i++){
        cout<< maxHeap.top()<< " ";
        maxHeap.pop();
     }cout<< endl;               
}