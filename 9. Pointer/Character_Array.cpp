#include<iostream>
#include<string>
using namespace std;
int main(){
    // int arr[10]= {1,3,5,6,8};
    // cout<< arr<<endl;  // print address

    // char ch[10] = "Anjali";
    // cout<< ch<< endl;   // Print entire content.
    // cout<< &ch<<endl;   // Print address
    // cout<< &ch[0]<< endl;  // Print entire content
    // cout<< ch[0]<< endl;  // Content of 0th index
    // cout<< *ch<<endl;  // content of 0th index

    // char temp = 'a';
    // char *p = &temp;
    // cout<< p<< endl;

// string name = "Ankit";
string name;
cout<< "Enter your name : ";
cin>>name;
string *ptr = &name;

cout<< name<< endl;
cout<< ptr<<endl; // Print Address 
cout<< *ptr<< endl;  // Print ankit
cout<< &ptr<< endl;

}