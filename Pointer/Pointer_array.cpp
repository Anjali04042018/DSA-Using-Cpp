#include<iostream>
using namespace std;
int main(){
    int arr[10];
//   cout<< "The address of first memory block is : "<<  arr << endl;  // address of 0th index
//   cout<< arr[0]<<endl; // It gives any garbage value .
//   cout<< "The address of first memory block is : "<< arr[0]<< endl;  // Value of 0th index
//   cout<< "The address of first memory block is : "<< &arr[0]<< endl;  // Address of 0th Index
//   cout<< "The address of first memory block is : "<< *arr<< endl;  // use to access the value of 0th index only.

int arr2[10]= {3,6,5,4,9};
// cout<< arr2[0]<<endl<< arr2[1]<<endl;
// cout<< *arr2<< endl;  // This line is used to access the 0th index value only.

// cout<< "The address of 0th index : " << &arr2<< endl;
// cout<< arr2<< endl;  // Second method to access the address of arr.
// cout<<"The address of 1st index : " <<&arr2[1]<< endl;  // Add 4 bit in 0th index.

// cout<< *arr2+1<<endl;  // Increment the 1st index value..
 
//  cout<< (*arr2)+1<<endl;
//  cout<< *(arr2+1)<<endl;  // Value of 2nd index

//  cout<< arr2[2]<<endl;
//  cout<< *(arr2+2)<<endl;,

int temp[10] =  {3,6,9};
cout<<"Address : " <<sizeof(temp)<< endl;  // 10*4
cout<<"size of one block : "<<sizeof(*temp)<<endl;
cout<< "Size "<<sizeof(&temp)<<endl;
int *ptr = &temp[0];
cout<< sizeof(ptr)<< endl;

}