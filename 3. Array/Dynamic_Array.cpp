#include<iostream>
using namespace std;
int  sum(int arr[] ,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<< "Enter the size of n : ";
    cin>> n;
    //int arr[n];  // not used this method because this is a bad practice..
    
    // Variable size array.    
    int *arr =  new int[n];
    cout<< "Enter the element of the array : ";
    for(int i = 0;i<n;i++){
        cin>> arr[i];
    }
    int ans = sum(arr,n);
    cout<< "Answer is : "<<ans<< endl;
    
    return 0;
}