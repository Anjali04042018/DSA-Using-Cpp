// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;
//     cout<<"The value of a is: "<< a<< endl;
//     cout<< "The address of a is : "<<&a <<endl;
//     cout<<"The value of a using pointer is : "<< *ptr <<endl;
//     cout<<"The address of a using ptr is : " <<ptr<<endl;
// //     char name[10] = "  anjali";
// //    cout<< &name << endl;
// //  char *ptr1 = &name[10];
// //  cout<< *ptr1<<endl;
//     (*ptr)++;
//     cout<<"Increment value of a : "<<  *ptr<<endl;

    // cout<< sizeof(a)<< endl;
    // cout<< sizeof(ptr)<< endl;
// second method to declare a pointer

// int *p = 0;
// p = &a;
// cout<< *p<< endl; 
 
// }


#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *ptr = &num;
    cout<< num<< endl;

    cout<< &ptr<< endl;
    cout<< &num<< endl;
    cout<< ptr<< endl;
    cout<< *ptr<< endl;   
    cout<< num++<< endl;
    cout<< num<< endl;

     
}