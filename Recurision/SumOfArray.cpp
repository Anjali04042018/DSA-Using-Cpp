#include<iostream>
using namespace std;
int sum(int arr[] , int n){
    // int sum=0;
    if(n==0){
        return 0;
    }
    if(n ==1){
        return arr[0];
    }
    int remaining=sum(arr+1,n-1);
    int sum = arr[0]+remaining;
    return sum;
}
int main(){
    int n = 5;
    int arr[n];
    // int sum =0;
    cout<< "Enter the element of array : ";
    for(int i=0;i<n;i++){
    cin>> arr[i];
    }
    cout<< sum(arr,n);
}