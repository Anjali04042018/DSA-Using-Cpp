#include<iostream>
using namespace std;

// Sum of n number

// int count(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+ count(n-1);
//     }
// int main(){
//     int n;
//     cout<< "Enter the value of n : ";
//     cin>> n;
//     cout<< count(n);
//     }

// Print of n Number
void print(int n){
    if(n==0){
        return;
    }
    // cout<< n<< " ";
    //  print(n-1);
     // Output -> n (n-1) .... (n-n)   This is calles tail recurisive 

     print(n-1);
     cout<< n << " ";
   // Output -> 1 2 3 4 5 ...   This is called Head recurisive
}
int main(){
    int n;
    cout<< " Enter the value of n : ";
    cin>> n;
    print(n);
}
