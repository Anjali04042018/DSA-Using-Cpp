#include<iostream>
using namespace std;
int power(int m ,int n){
    // Base case
    if(n==0){
        return 1;
    }
    if(n==1){
        return m;
    }
// Recurisive relation
    // int smallerProblem= power(  m,n-1);
    // int biggerProblem= m*smallerProblem;
    // return biggerProblem;

    // return m * power(m,n-1);

    //       second method

    int ans = power(m,n/2);
    if(n%2 == 0){
        return ans * ans;
    }   
    else{
        return m* ans * ans;
    }
}
int main(){
    int m,n;
    cout<< "Enter the value of m : ";
    cin>>m;
    cout<< "Enter the value of n : ";
    cin>> n;
    cout<< power(m,n)<< endl;
    

}