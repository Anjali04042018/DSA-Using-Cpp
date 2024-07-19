#include<iostream>
#include<vector>
using namespace std;
int main(){
    // initialization
    vector<int> v;

     v.push_back(2);
     v.push_back(4);
     v.push_back(6);
     cout<< "Before POP operation : ";
     for(int i: v){  
       cout<< i<< " ";
     }

    cout<< endl;
    cout<< "Size of vector is : "<< v.size()<< endl;
    cout<< "Capacity of vector is : "<< v.capacity()<< endl;

    v.pop_back();
    cout<< "After POP operation : ";
    for(int i: v){
        cout<<i<< " ";
    }
    cout<< endl;
    cout<< "First element of vector is : "<< v.front()<< endl;
    cout<< "Last element of vector is : "<< v.back()<< endl;
    cout<< "Particular Element : "<< v.at(1)<< endl;

    v.clear();
    cout<<"After clear vector size is : "<< v.size()<< endl;
    cout<<"After clear vector capacity is : "<< v.capacity()<< endl;


}