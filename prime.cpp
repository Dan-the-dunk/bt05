#include<iostream>
using namespace std;

int isPrime(int n){
    for(int i = 2 ; i < n/2 + 1 ; i ++ ){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(n < 2) cout<<"0";
    else cout<<isPrime(n);
}