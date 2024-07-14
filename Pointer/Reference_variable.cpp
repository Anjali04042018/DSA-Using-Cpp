// Reference variable :- 

#include<iostream>
using namespace std;

void update1 (int n){
    // Using normal variable
    n++; 
}
void update2 (int &n){
    // Using reference variable
    n++; 
}
int main(){
 /*   int a = 5;
    // Create a reference variable 
    int &b = a;
    cout<< a<< endl;
    a++;
    cout<< a<< endl;
    b++;
    cout<< a <<endl;
    cout<< b<<endl;
*/

int n = 10;
cout<< "Before "<< n<< endl;
update1(n);
cout<< "After "<< n << endl<< endl;
cout<< "Before "<< n<< endl;
update2(n);
cout<< "After "<< n << endl;
}

