 #include<iostream>
 using namespace std;
 int search(int arr[],int size,int key){
for(int i=0;i<size;i++){
    if(arr[i] == key){
        return 1;
    }
    
}
return 0;
 }
 int main(){
    
    int arr[10] = {1,4,6,2,-5,0,7,3,10,9};
    cout<< "Enter the element to search for "<<endl;
    int key; 
    cin>>key;
    int found = search(arr,10,key);
    if (found )
    {
        cout<< "Key is present "<<endl;
    }
    else{
        cout<<"Key is Invalid" << endl;
    }
    return 0;
 }