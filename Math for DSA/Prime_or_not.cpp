//  #include<iostream>
//  using namespace std;

// bool isPrime(int n ){
//     if(n<=1)
//     return false;
//     for(int i = 2 ; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
//  int main(){
//     int n ;
//     cout<< " Enter your Number : ";
//     cin>>n;
//     if(isPrime(n)){

//         cout<< " It is a Prime Number"<< endl;
//     }
//     else{
//         cout<< " It is not a Prime Number"<< endl;
//     }
//  }

// 204. Count Primes  (Leetcode)

// class solution{
//     public:
//     int countPrimes(int n){
//         int cnt =0;
//         vector<bool> prime(n+1, true);
//         prime[0] = prime[1] = false;
//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 cnt++;
//                 for(int j= 2*i ; j<n;j=j+1){
//                     prime[j]= 0;
//                 }
//             }
//         }
//         return cnt;
//     }
// }

