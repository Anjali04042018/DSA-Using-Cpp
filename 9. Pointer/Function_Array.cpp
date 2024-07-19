#include<iostream>
using namespace std;
void print(int *p){
    // cout<< p << endl; // Address
    cout<< &p <<endl; // Address 
    cout<< *p<< endl;  // Value of p
}

void update(int *p){
    // p = p+1;
    // cout<<"Inside "<<  p<<endl;

    *p = *p+1;
}
int sum(int *arr,int n){
    int sum = 0;
    cout<< "Size of :"<< sizeof(arr)<< endl; // Size of one address 
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){

//     int value = 5;
//     int *p = &value;
// //    print(p);
// cout<< "Before Address "<< p<< endl;
// update(p);
// cout<< "After Address " << p << endl;
// cout<< "Before Value "<< *p<< endl;
// update(p);
// cout<< "After Value " << *p << endl;

int arr[5]= {1,2,3,4,5};
cout<< "Sum is : "<<sum(arr+2,5)<< endl;
   cout<< "Size of :"<< sizeof(arr)<< endl;  
}