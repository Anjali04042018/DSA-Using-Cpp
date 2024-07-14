#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <=end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[8] = {4,6,8,10,15,20,25,32};
    int ans1 = BinarySearch(arr1, 5, 1);
    int ans2 = BinarySearch(arr2, 8, 20);
    cout <<"The index value of 1 is "<< ans1 <<endl;
    cout <<"The index value of 20 is "<< ans2 <<endl;
    return 0;
}