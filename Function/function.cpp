#include <iostream>
#include <math.h>
using namespace std;

int pow(int a, int b)
{

    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    //  Power(a,b)

    /*      Normal method
     int a,b;
      cout<<"Enter the value of a : "   ;
      cin>> a;
      cout<< "Enter the value of b : ";
      cin>>b;
      cout<<"Power of a & b is : "<< pow(a,b);


    // Using loop
     int a,b;
     cin>> a>>b;
    int ans=1;
     for (int i=1;i<=b;i++){
    ans = ans*a;
     }
     cout<< ans;

    */

    int a, b, a1, b1;

    cout << pow(a, b);
    cout << pow(a1, b1);
}
 