// If access modifier is public we can use it using (.) operator simply.
// If access modifier is private we can use getter and setter operator.

#include<iostream>
using namespace std;
class car{
    // Properties

    private:
    string feature;
    int price;

    public:
    string name;
    string color;
    
    // getter and setter
    int getPrice(){
        return price;
    }
    void setPrice(int p){
        price =p;     
    }
    
    string getFeature(){
        return feature;
    }
    void setFeature(string str){
        feature = str;
    }

};


int main(){
    car h1;
    // cout<< "Size is : " << sizeof(h1)<< endl;  // Output- 72
    h1.name = "BMW";
    h1.color= "White";

// Use setter 

    h1.setFeature("Good");
    h1.setPrice(10000);
    // Print 
    cout<< "Name of car is "<< h1.name<< endl;
    cout<< "Color  of car is "<< h1.color<< endl;
    cout<< "feature  of car is "<< h1.getFeature()<< endl;
    cout<< "Price is : " << h1.getPrice();
}