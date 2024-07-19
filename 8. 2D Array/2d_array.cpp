#include<iostream>
using namespace std;

// int Search(int arr[3][4], int target , int m , int n){
// for(int i = 0 ; i<3 ;i++){
//     for(int j=0 ; j<4;j++){
//         if(arr[i][j]== target){
//             return 1;
//         }
//     }
// }
//         return 0;
// }
/*
void RowSum(int arr[3][4],int i , int j){
    for(int i =0 ; i<3; i++){
        int sum =0;
        for(int j =0;j<4;j++){

        sum += arr[i][j];
        }
    cout<< sum << " ";
      }
      cout<< endl;
}

void ColSum(int arr[3][4], int m,int n){
    for(int j=0;j<4;j++){
        int sum =0;
    for(int i=0;i<3;i++){
        sum += arr[i][j];
    } 
   cout<< sum << " ";
}
cout<< endl;
}
*/
// int largestSum(int arr[3][4], int i , int j)
// {
//     int maximumSum = 0;
//     int index=-1;
//     for(int i=0; i<3;i++){
//         int sum =0;
//         for(int j=0; j<4;j++){
//             sum += arr[i][j];
//         }
// if(sum>maximumSum){
//     maximumSum = sum;
//     index =i;
// }
//     }
//     cout<<maximumSum<< endl;
// return index;
// }

int main(){

// int arr[3][4];   // Taking input as user
 int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  // Initialize an array in starting
// int arr[3][4] = {{1,3,4,5},{1,7,4,2},{7,8,9,3}};
cout<< "Enter the element of Array"<<endl;

// Taking input as a form of row
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>> arr[i][j];
    }
}
// Taking input as a form of column
// for(int i=0;i<4;i++){
//     for(int j=0;j<3;j++){
//         cin>> arr[j][i];
//     }
// }

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<< arr[i][j] << " ";
    }
    cout<< endl;
}
// int target;
// cout<< " Enter your element you want to search "<< endl;
// cin>> target;
// if(Search(arr,target ,3,4)){
//     cout<< " Element found"<< endl;
// }else{
// cout<< "Not found"<< endl;

// }

// cout<< "Printing Sum"<< endl;
// RowSum(arr ,3,4);
// // ColSum(arr ,3,4);
// cout<< " Maximum sum is :";
// int index=largestSum(arr ,3,4);
// cout<< "Maximum row is at index "<< index<< endl;
return 0;
}
 
