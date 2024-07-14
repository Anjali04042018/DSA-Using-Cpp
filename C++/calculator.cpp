#include<iostream>
using namespace std ;
int main(){
    int a,b;
    cout<< "Enter the value of a :";
    cin>> a;
    cout<< "Enter the value of b:";
    cin>> b;       
    char operation;
    cout<< "Enter the  Operation :";
    
    cin >> operation; 
    switch (operation)
    {
    case '+':
            cout<< " The sum of a and b are :"<< (a+b)<<endl;
        break;
    case '-':
    cout<< " The Difference of a and b is :"<< (a-b)<<endl;
    break;
    case '*':
    cout<< " The Multiplication of a and b is :"<< (a*b)<<endl;
    break;
    case '/':
    cout<< " The Division of a and b is :"<< (a/b)<<endl;
    break;
    case '%':
    cout<< " The Modulus of a and b is :"<< (a%b)<<endl;
    break;
    default:
        break;
    }
}