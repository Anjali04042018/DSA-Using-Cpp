// copy value of one pointer to another pointer
#include<iostream>
using namespace std;
int main(){
    int num = 10;
    int *ptr = &num;
    int *ptr1 = ptr;
    cout<<*ptr<<endl;
    cout<< *ptr1<< endl;
  
 

return 0;
  }