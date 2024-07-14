// Deque :  Instertion and deletion in both end
// Dynamic ->   Random access is possible

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_front(2);
    d.push_front(3); 
    d.push_front(8); 
    d.push_back(10);
    d.push_back(5);
     cout<<"Element at 2nd index is : "<<  d.at(2)<< endl; 
    for(int i:d){
        cout<< i << " ";
    }
    cout<< endl;

    cout<< "Size of Deque is : "<< d.size()<< endl;
    cout<< "First Element : "<< d.front()<< endl;
    cout<< "Last Element : "<< d.back()<< endl;

    d.pop_back();
    for(int i:d){
        cout<< i<< " ";
    }
    cout<< endl;
    d.pop_front();
    for(int i:d){
        cout<< i<< " ";
    }
    cout<< "Empty or not "<< d.empty()<< endl;
    cout<< "Empty or Not "<< d.empty()<< endl;
    cout<< "Before erase Size of Deque is : "<< d.size()<< endl;
    
    d.erase(d.begin());
    cout<< "After erase Size of Deque is : "<< d.size()<< endl;
}
