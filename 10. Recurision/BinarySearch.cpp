#include<iostream>
using namespace std;
int BinarySearch(int arr[],int start ,int end,int key){
    if(start>end){
        // return false;
        return -1;
    }
    int mid = (start+end)/2;
    if(arr[mid]== key){
        // return true;
        return mid;
    }
    if(arr[mid]>key){
        BinarySearch(arr,start,mid-1,key);
    }
    else{
        BinarySearch(arr,mid+1,end,key);
    }
}
int main(){
    int arr[7] = {3,5,7,10,14,18,21};
    int size = 7;
    int key = 10;
    
    int ans= BinarySearch(arr,0,6,key);
    cout<<ans;
   // if(ans){
    //     cout<< "Present";
    // }
    // else{
    //     cout<< "Not present";
    // }
}