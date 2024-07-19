// #include<iostream>
// #include<stack>
// using namespace std;

//  int main(){ 
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.pop();

//     cout<< "Top element in stack is "<< s.top()<< endl;
//     if(s.empty()){
//         cout<< "Stack is empty"<< endl;

//     }
//     else{
//         cout<< "Stack is not empty"<< endl;
//     }

//     cout<< "Size of the stack is "<< s.size()<< endl;
// }

#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string symbol){
    stack<char> st;
    for(int i =0;i< symbol.length();i++){
        char ch = symbol[i];

        // if open bracket
            if(symbol == '(' || symbol == '{' || symbol == '['){
        st.push(ch);
    }
    // If closed  bracket
    else{
        if(st.empty()){
          
          char top = st.top();
        
        if((ch == ')' && top == '(') ||
           (ch == '}' && top == '{') || 
           (ch == ']' && top == '[')){
            st.pop();
           }
           else{
            return false;
           }
    }
   else{
    return false;
   }
    }
}
if(st.empty()){
    return true;
}
else{
    return false;
}
}
int main(){
    string symbol = "(())";
    stack<char> st;
    for(int i = 0;i< symbol.length();i++){
        char ch = symbol[i];
        st.push(ch);
    }
    
}