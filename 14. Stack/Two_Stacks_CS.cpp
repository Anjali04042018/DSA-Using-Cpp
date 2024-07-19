#include<iostream>
#include<stack>

class TwoStack{
    int arr*
    int top1;
    int top2;
    int size;

    TwoStack(int size){
        top1= -1;
        top2 = size;
        arr = new int[size];
        this->size = size;
    }

    void push1(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }
    void push2(int num){
        if(top2 - top1 > 1){
            top--;
            arr[top2] = num;
        }
    }

    int pop1(){
        if(top1 >=0){
            int ans = arr[top1];
            top--;
            return ans;
        }else{
            return -1;
        }
    }

    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

