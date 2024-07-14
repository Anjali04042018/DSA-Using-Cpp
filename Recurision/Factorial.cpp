#include<iostream>
using namespace std;
int factorial(int n){

    // Base case
    if(n==0){
        return 1;
    }
    // Recursive relation
    
    int smallerProblem= factorial(n-1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}

int main(){
    int n;
    cout<< " Enter the value of n : ";
    cin>> n;
    cout<< factorial(n);
}