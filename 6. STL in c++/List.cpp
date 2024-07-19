#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l;
    l.push_back(3);
    l.push_back(8);
    l.push_front(4);
    cout<< "Before POP Operation : ";
    for(int i: l){
        cout<< i << " ";
    }
    cout<< endl;
    // cout<< "After POP operation : ";
    // l.pop_back();
    //   for(int i: l){
    //     cout<< i << " ";
    // }
    // cout<< endl;
    // l.pop_front();
    //   for(int i: l){
    //     cout<< i << " ";
    // }
    cout<< "Size of List is : " << l.size()<< endl;
    cout<< "First Element : "<< l.front()<< endl;
    cout<< "Last element : "<< l.back()<< endl;
    cout<< "Empty or Not : "<< l.empty()<< endl;
    l.erase(l.begin());
     for(int i: l){
        cout<< i << " ";
    }
}