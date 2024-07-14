#include<iostream>
using namespace std;

// What is class -> class is a user defined data type .

// Create a class

class Hero{

    // Properties
    public:
    int age;
    string name;
};
int main(){
    Hero h1;   // Create object
    cout<< sizeof(h1) << endl;   //   24 byte for string + 4 byte of int.

  //Note:  Empty class me size 1 hoti hai ...

//  How to access property  ->  Using (.) opertators
// Type of access modifier ->  1. public 2. private 3. protected

   h1.name = "Anjali";
   h1.age= 20;
cout<< "Name of h1 is : "<<h1.name<< endl;
cout<< "age is : "<< h1.age;
}