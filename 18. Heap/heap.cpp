#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size; 
    heap(){
        arr[0] = -1;
        size = 0; 
    }

    void insert(int val){
        size = size +1;
        int index =  size;
        arr[index] = val;

        while(index > 1){
            int parent = index /2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i= 1;i<= size;i++){
            cout<< arr[i]<< " ";
        }cout<< endl;
    }

    void deletefropmHeap(){
        if(size == 0){
            return ;
        }
        // step 1 : put last element into first index
        arr[1] = arr[size];
        size--;

        // Take root node to its correct position
        int i = 1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }
};



int main(){
     heap h;
     h.insert(10);
     h.insert(20);
     h.insert(30);
     h.insert(40);
     h.print();
     h.deletefropmHeap();
     h.print();
}