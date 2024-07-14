#include<iostream>
#include<stack>
using namespace std;

// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(12);
//     st.push(14);
//     st.push(18);
//     st.push(20);
//     cout<< "Top Element is : "<< st.top()<< endl;
//     st.pop();
//     cout<< "Top Element is : "<< st.top()<< endl;

//     cout<< st.size()<< endl;

// }

class stack{
    public:
    int *arr;
    int size;
    int top;
    stack(int size){
        this->size = size;
        arr= new int[size];
        top = -1;
    }
};

int main(){
    stack 
}