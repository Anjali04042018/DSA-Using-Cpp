#include <iostream>
using namespace std;
int main()
{           
                    //   While loop
  // int n;
  // cout << "Enter the value of n :";
  // cin >> n;
  //     While Loop
  //   int a =1;
  //   while (a<=n){
  //     cout<< a << " " ;
  //      a++;
  //   }

    //    For loop
    // for(int i=1; i<=n;i++){
    //     cout<< i<< " ";
    // }

    //   sum of n number using while loop
    // int a = 1;
    // int sum = 0;
    // while (a <= n)
    // {
    //     sum = sum + a;
    //     a++;
    // }
    // cout << " The value of sum is :" << sum;

    //    Sum of Even number

    // int n;
    // cout<< "Enter the value of n : ";
    // cin>> n;
    // int sum=0;
    // int num = 2;
    // while(num<= 10){
    //     sum = sum + num;
    //     num= num+2;
    // }
    // cout<< sum;

    //  Prime or Not ?

    // int n;
    // cin>> n;
    // int i=2;
    // while(i<n){
    //     if(n%i==0){
    //         cout<< "Not prime for"<< i<< endl;
    //     }
    //     else{
    //         cout<< "Prime for"<< i<< endl;
    //     }
    //     i = i+1;
    // }

                     //    for loop
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int sum=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     // cout << i << endl;         // 1,2,3,4,5
    //     // sum = sum+i;
    //     sum+=i;
    //     // cout<<sum<<endl;          //  1,3,6,10,15
        
    // }
    // cout<<sum<<endl;             //  15

              // Fibbonacci series
    int a=0,b=1;
    int n;
    cout << "Enter the value of n : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
       int  NextNo= a+b;
       cout<<NextNo<<" ";
       a=b;
       b=NextNo;

    }
     
}