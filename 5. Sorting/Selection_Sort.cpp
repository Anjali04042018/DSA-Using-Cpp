#include<iostream>
using namespace std;
int SelectionSort(int arr[],int size){
for(int i = 0;i<size;i++){
        int minIndex= i ;
        for(int j= i+1;j<size;j++){
            if (arr[j]<arr[i]){
               minIndex = j;
            }
           swap(arr[minIndex],arr[i]);
        }
         
    }
}
int main(){
    int arr[5] = {3,6,2,9,5};
    cout<<SelectionSort(arr,5);
}