#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // int b =10;
    // if(a>b){
    //     cout<< a;
    // }
    // else{
    //     cout<<b;
    // }

    //    Taking input as a user.

    // int c;
    // cout<< "Enter the value of c :" ;
    //  cin >> c;
    // int d;
    // cout<< "Enter the value of d : ";
    // cin >> d;
    //     if(c>d){
    // cout << c;
    // }
    // else{
    //     cout<<d;
    // }

    //   check the number is +ve ,-ve and 0.

    // int num ;
    // cout<< "Enter the Number as per your choice :";
    // cin>>num;
    // if(num<0){
    //     cout<<"Number is Negative";
    // }
    // else if(num>0){
    //     cout<< "Number is positive";
    // }
    // else{
    //     cout<< "Zero";
    // }

    char ch;
    cout<< "Enter character : ";
    cin>> ch;
    if(ch >= 'a' && ch <='z'){
cout<< "This is lower case";
    }
else if(ch>='A' && ch <='Z'){
    cout<< "THis is Upper case";
}
else if(ch >='0'&& ch<='9'){
    cout<< "This is number digit";
}
  return 0; 
}