  //  Return first and Last index of key in any array

#include<iostream>
using namespace std;
int FirstIndex(int arr[],int size,int key){
    int start =0;
    int end = size -1;
    int ans =-1;
    int mid = (start + end)/2;
    while(start<=end){
        if (arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = (start + end)/2;
    }
    return ans;
}
int LastIndex(int arr[],int size,int key){
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end) {

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[10] = {2,3,4,4,5,5,5,5,8,10};
    cout<<"The first Index of 5 are "<< FirstIndex(arr,10,5) <<endl;
    cout<<"The Last Index of 5 are "<< LastIndex(arr,10,5) <<endl;
    return 0;
}