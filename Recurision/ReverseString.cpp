#include<iostream>
using namespace std;
            //   Normal method
// string reverse(string &name ,int i,int j){
//     while(i<j){
//         swap(name[i],name[j]);
//         i++;
//         j--;
//     }
//     return name;
// }

//       Using Recurision

void reverse(string &str, int i ,int j){
    while(i>j){
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}
int main(){
    string name;
    int i,j;
    cout<<"Enter your name : ";
    cin>> name;
     reverse(name , 0,name.length()-1);
     cout<< "Your reverse name is : "<<name;
    return 0;
}