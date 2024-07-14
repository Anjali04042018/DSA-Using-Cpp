 #include<iostream>
 #include<stack>
 using namespace std;

// Solve using recurrision

 void solve(stack<int> &inputStack, int count, int size){
    // Base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack,count+1, size);
    inputStack.push(num);
 }
 void deleteMiddle(stack<int> &inputStack, int N){
    int count = 0;
    solve(inputStack, count,  N);
 }
 int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    deleteMiddle(s,5);
 }