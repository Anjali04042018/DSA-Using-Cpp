#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    // Creation
    unordered_map<string, int>m;

    // Insertion 1st method
    pair<string,int>pair1 = make_pair("Anjali", 3);
    m.insert(pair1);

    // Insertion 2nd method
     pair<string,int>pair2("Aman",2);
     m.insert(pair2);

     // Insertion 3rd method
     m["Ankit"] = 1;

    // Search
    cout<< m["Aman"]<< endl;         // 2
    cout << m.at("Anjali")<< endl;   // 3

    // size
    cout<< m.size()<< endl;

    // to check present or not
    cout<< m.count("Name")<< endl;    // 0
    cout<< m.count("Aman")<< endl;    // 1

    // Erase 
    cout<< m.erase("Ankit")<< endl;
    cout<< m.size()<< endl;
 

    // Iterator/ Traversal

    unordered_map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first<< " "<< it->second << endl;
        it++;
    }
     return 0;
} 