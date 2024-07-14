#include<iostream>
using namespace std;

  // Function of Upper case to Lower case
char toLowerCase(char ch){
    
    if(ch>='a' && ch <= 'z')
    return ch;
else{
    char temp = ch - 'A' + 'a';
    return temp;
}
}
// Function of Lower case to upper case

// char toUpperCase(char ch){
//     if(ch>='a' && ch <='z')
//     result ch;
// else{
//     char temp = ch - 'a' + 'A';
//     return temp;
// }
// }
bool checkPalindrome(char a[],int n){
    int start =0;
    int end= n-1;
    while(start<=end){
        if(a[start] != a[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
int getLength(char name[]){
    int count =0;
    for(int i=0;name[i] != '\0' ; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<< " Enter your name :"<<endl;
    cin>> name;
    int len = getLength(name);
cout<< "Length of String :"<< len<< endl;
 cout<< " Palindrome or Not :"<< checkPalindrome(name,len)<<endl;
}