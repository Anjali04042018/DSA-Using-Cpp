#include<iostream>
#include<array>
using namespace std;
int main(){

    array<int, 4>arr = {1,2,3,4};

    cout<< "Size of array is :" <<arr.size()<< endl;

    for(int i = 0;i<arr.size();i++){
        cout<< arr[i]<< " ";
    }
    cout << endl;
    cout<< "Particular element :" << arr.at(2)<< endl;
    cout<< "First Element of array is : " << arr.front()<< endl;
    cout<< "Last element of array is : "<< arr.back()<< endl;
    cout<< arr.empty();
}