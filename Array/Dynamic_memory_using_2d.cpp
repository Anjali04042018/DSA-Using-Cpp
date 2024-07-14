#include<iostream>
using namespace std;

    int main(){
        int m,n;
        cout<< "Enter the value of m : ";
        cin>>m;
        cout<< " Enter the value of n : ";
        cin>> n;

 // Createing a 2D array using dynamic memory..
int **arr = new int*[m];
for(int i =0 ;i<m;i++){
    arr[i] = new int[n];
    }

// Taking input
for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        cin>> arr[i][j];
    }
}
// Output
for(int i=0;i<m;i++){
    for(int j=0;i<n ;j++){
        cout<< arr[i][j]<< " ";
        
        
            }
            cout<< endl;
}
return 0;
     }