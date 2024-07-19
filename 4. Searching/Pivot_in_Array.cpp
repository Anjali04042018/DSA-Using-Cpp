#include<iostream>
using namespace std;
int PivotElement(int arr[] , int size){
    int start =0;
    int end = size - 1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = (start+end)/2;
    }
    return start;
}
int main(){
  int arr[5] = {8,10,17,1,7};
  cout<< "Pivot is : "<< PivotElement(arr,5);
} 
