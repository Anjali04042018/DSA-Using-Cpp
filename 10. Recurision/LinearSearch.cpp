#include<iostream>
using namespace std;

bool Search(int arr[],int size ,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
  bool n = Search(arr+1,size-1,key);
    return n;
    }
  
}
int main(){
    int n=5;
    int arr[5]= {3,6,8,4,5};
    // int *arr= new int[n];
    //     cout<< "Enter the element of array : ";
    // for(int i= 0;i<n;i++){
    // cin>> arr[i];
    // }
   int key = 8;
   int ans= Search(arr,n,key);
   if(ans){
    cout<<"Element found";
   }
   else{
    cout<<"Element not found";
   }
}
