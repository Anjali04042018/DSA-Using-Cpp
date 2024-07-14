// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack{
//     public:
//     int *arr;
//     int size;
//     int top;
//     Stack(int size){
//         this ->size = size;
//         top = -1;
//         arr = new int[size];
//     }

//     void push(int element){
//         if(size - top > 1){
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout<< "Stack Overflow"<< endl;
//         }
//     }

//     void pop(){
//         if(top>=0){
//             top--;
//         }
//         else{
//             cout<< "Stack Underflow"<< endl;
//         }
//     }
//     int peek(){
//         if(top >= 0){
//             return  arr[top];
//         }
//         else{
//             cout<< "Stack empty"<< endl;
//             return -1;
//         }
//     }
//     bool isEmpty(){
//         if(top >=0){
//             return false;
//         }
//         else{
//             return true;
//         }
//         // if(top == -1){
//         //     return true;
//         // }
//         // else{
//         //     return false;
//         // }
//     }
// };

// int main(){
//     Stack st(5);  
//     st.push(10);
//     st.push(12);
//     st.push(13);
//     st.push(14);
//     st.push(17);
//     st.push(18);

//     cout<< st.peek()<< endl;
//     st.pop();
//     cout<< st.peek()<< endl;
    
//     if(st.isEmpty()){
//         cout<< "Stack is Empty"<< endl;
//     }
//     else{
//         cout<< "Stack is not  empty"<< endl;
//     }

// }


#include<iostream> 
#include<stack>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;
    Stack(int size){
        this ->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element){
        if(size - top > 0){
            top++;
            arr[top] = element;

        }
        else{
            cout<< " Stack Overflow"<< endl;
        }
    }
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<< "Stack underflow"<< endl;
        }
    }
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
        cout<< "Empty Stack"<< endl;
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
    Stack st(5);
    st.push(22);
    st.push(25);
    st.pop();
    cout<< st.peek()<< endl;;

   if( st.isEmpty()){
        cout<< "Stack is Empty"<< endl;
    }
    else{
        cout<< "Stack is not empty"<< endl;
    }
}