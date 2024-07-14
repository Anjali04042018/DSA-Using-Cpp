#include <iostream>
using namespace std;

int getMin(int number[], int n)
{
    int INT_MAX;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (number[i] < min)
        {
            min = number[i];
        }
    }
    return min;
}
int getMax(int number[], int n)
{
    int INT_MIN;
    int maxi = INT_MIN; 
    
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, number[i]);
        // if (number[i]>max){
        //     max= number[i];
        // }
    }
    return maxi;
}
int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;
    int number[100];
    cout << "Enter the element of array : ";
    // Taking input in array
    for (int i = 0; i <= size; i++)
    {
        cin >> number[i];
    }
    cout << " Maximum value is " << getMax(number, size) << endl;
    cout << " Minimum value is " << getMin(number, size) << endl;
    return 0;
}
