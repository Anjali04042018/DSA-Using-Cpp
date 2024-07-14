#include<iostream>
using namespace std;
bool palindrome(string str,int i ,int j){
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return palindrome(str, i+1 ,j-1);
    }
}
int main(){
    string name = "anna";
    int i = 0; 
    int j = name.length()-1;
    bool ans= palindrome(name, i,j);
    if(ans){
        cout<< "It is palindrome...";
    }
    else{
        cout<<"It is not Palindrome....";
    }
}