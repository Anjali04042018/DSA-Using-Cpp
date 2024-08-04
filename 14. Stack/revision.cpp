#include<iostream>
#include<stack>
using namespace std;

// Stack Implementation using class

class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this ->size= size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size - top> 1){
            top++ ;
            arr[top] = data;
        }
        else{
            cout<< "Stack Overflow"<< endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<< "Stck underflow"<< endl;
        }
    }

    int peek(){
        if(top >= 0){

        return arr[top];
        }else{
            cout<< "Stack is empty"<< endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
   // STL of Stack

//    stack<int>st;

//    st.push(10);
//    st.push(20);
//    cout<< "top element is : "<< st.top()<< endl;
//    st.pop();
//     cout<< "top element is : "<< st.top()<< endl;
//     if(st.empty()){

//    cout<<"Stack is empty" << endl;
//     }else{
//         cout<< "Stack is not empty"<< endl;
//     }

//     cout<< "Size of stack is " << st.size()<< endl;

    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"Top element is "<< st.peek()<< endl;
    st.pop();
    cout<<"Top Element is "<<  st.peek()<< endl;
    st.pop();
    if(st.isEmpty()){
        cout<< "Stack is Empty"<< endl;
    }else{
        cout<< "Stack is not Empty" << endl;
    }
}