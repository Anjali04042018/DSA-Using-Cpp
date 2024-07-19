  #include<iostream>
  using namespace std;
  void counting(int n){
    for(int i=1;i<=n;i++){
        //cout<< i<<endl;    //  counting number
        cout<<n<<" * "<<i<<" = "<<(n*i)<< endl;    // for table
            }
  }
  int main(){
    int n ;
    cout<<" Enter your number : ";
    cin>>n;
    counting(n);
    return 0;
  }