 #include<iostream>
 using namespace std;

 void moveZeroes(vector<int>& nums){
    int i= 0;
    for(int j= 0,j<nums.size();j++){
        if(nums[i] != 0){
            swap(nums[j], nums[i]);
            i++;
        }
    }
 }
 void print(int arr[], int n){
    for(int i=0;i< n;i++){
        cout<< arr[i]<< " ";
    }cout<< endl;
 }
 int main(){
    int arr[5] = {2,4,0, 1,0};
    moveZeroes(arr);
    print(arr,5);
 }