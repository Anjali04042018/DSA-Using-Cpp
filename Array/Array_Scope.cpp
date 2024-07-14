#include<iostream>
using namespace std;
void update(int array[],int n){
    cout<<endl<<"Inside the function"<<endl;

    // Updadating the second element.
    array[1] = 7;
    // Printing the array
    for(int i=0;i<4;i++){
        cout<<array[i]<<" ";
    }cout<<endl;
    cout<< "Going back to main function ";
}
int main(){
    int array[4] = {1,2,3,4};
    update(array,3);
    for(int i=0;i<4;i++){
        cout<<array[i]<<" ";
    }
    
}