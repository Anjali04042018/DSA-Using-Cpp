// #include <iostream>
// using namespace std;
// int SquareRoot(int n)
// {
//     int start = 0;
//     int end = n;
//     int mid = start + (end - start) / 2;
//     int ans = -1;
//     while (start < end)
//     {
//         if ((mid * mid) == n)
//         {
//             return mid;
//         }
//         else if ((mid * mid) < n)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int sqrt(int x);
//     cout<< SquareRoot(40);
    
// }






#include <iostream>
using namespace std;
long long SquareRootInteger(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start < end)
    {
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i=0;i<precision ;i++){
        factor = factor/10;
        for(double j=ans;j*j<n; j=j+factor)
        {
            ans =j;
        }
    }
    return ans;
}
int main()
{
    // int n;
    // cin>>n;
    int sqrt(int x);
    cout<< SquareRootInteger(40)<< endl;
    int tempSol= SquareRootInteger(40);
    cout<< "Answer is : "<< morePrecision(40,3,tempSol)<< endl;
    return 0;
    }