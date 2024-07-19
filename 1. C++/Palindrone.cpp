#include<iostream>
using namespace std;
int main(){
    string name;
    cin>> name;
    int i=0;
    int j=name.length()-1;
    while(i<j){
            if(name[i]== name[j]){
                cout<< "palendrome";
                return 0;
            }
            else{
                cout<< "Not palindeone";
                return 0;
            }
            i++;
            j--;
    }
}