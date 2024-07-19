#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Anjali");
    s.push("Kumari");
    s.push("Gupta");
    cout<< s.top()<< endl;
    s.pop();
    cout<<s.top()<< endl;

    cout<< "Empty or Not : "<< s.empty()<< endl;
    cout<< "Size of stack is : "<< s.size()<< endl;
}