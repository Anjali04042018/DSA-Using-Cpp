#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array "<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<< "Printing Done "<<endl;
}
int main(){
    int array[10] ={1,2,3,4,5,6,7,8,9,10};
     printArray(array, 10);

     int array1[5];
     printArray(array1,5);

     } 
