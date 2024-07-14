#include<iostream>
using namespace std;

int main(){

  int num1[10]; //   Declaration of array

    int num2[4] = {1,4,6,7};  // Initialization af array

   //  cout<<num2[2]<<endl;

   //  cout<<num2[7]<< endl;  //  It gives garbage value

    // print all element of an array

    int n=4;
    for(int i=0;i<n;i++){
      //   cout<< num1[i] <<" ";  // it gives any garbage value
         cout<< num2[i] <<" "; //  it gives 1,4,6,7
            }


         // char ch[5] ={'a','b','c','d','e'};
         // cout<<ch[2]<<endl;
         // int n= 5;
         // for(int i=0;i<n;i++){
         //    cout<<ch[i]<<" ";
         // }
    
}