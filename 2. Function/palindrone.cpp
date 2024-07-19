#include<iostream>
using namespace std;
bool checkPalindrome(string str){
    int i =0;
    int j = str.length()-1;
    while(i<j){
        if(str[i]==str[j]){
            return true;
        }
        else{
            return false;
        }
    }
}
int main(){
    // string str= "anjali";   // Not palindrone 
    string str = "abccba";    // palindrome
    bool  ans=checkPalindrome(str);
    if(ans){
        cout<< "This is palindrone";
    }
    else{
        cout<< "This is not palindrone";
    }
    
}