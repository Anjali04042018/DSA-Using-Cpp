#include<iostream>
using namespace std;
 
 //  Reverse of the string
void reverse (char name[] ,int n){
    int start =0;
    int end = n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

//    // Length of array
int getLength(char name[]){
    int count = 0;
    for(int i=0;name[i] != '\0' ; i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<< "Enter your name:"<<endl;
    cin>> name;
    cout<< "Your name is "<<name <<endl;  // Print Anjali
    // name[2] = '\0';
    // cout<< "Your name is "<<name;  // Print An only
   int len= getLength(name);
//     cout<< "Length of string "<< len;
    cout<<endl;
     reverse(name,len);
     cout<< "your reverse name is:"<<name<< endl;
      return 0;
}



