#include<iostream>
using namespace std;
void bubbbleSort(int* arr, int n){
    for(int i=1;i<n;i++){
        //  for round 1 to n-1
        bool swapped = false;
        for(int j=0;j<n-1;j++){
            // process element till n-1 th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            // Already sorted
            break;
        }
    }
}
int main(){
int arr[5] = {2,4,1,6,9};
bubbbleSort(arr,5);
for(int i=0;i<5;i++){
    cout<< arr[i]<<" ";
}
}