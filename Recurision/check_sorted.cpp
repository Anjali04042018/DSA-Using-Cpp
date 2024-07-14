#include<iostream>
using namespace std;
int isSorted(int arr[] , int size){
    if(size ==0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int sorted= isSorted(arr+1, size -1);
        return sorted;
    }
}
int main(){
    int arr[5]={2,5,8,5,30 };
    int size = 5;
    // cout<<isSorted(arr,size);
    int ans= isSorted(arr,size);
    if(ans){
        cout<< "Array is Sorted";
    }
    else{
        cout<< "Array is not Sorted"; 
    }
}