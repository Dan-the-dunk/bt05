#include<iostream>
using namespace std;

//string or int-int;
long long bi_to_dec( int n){
    long long res = 0, digit ,result = 0;
    while ( n>0 ){
        digit = n%2;
        n/=2;
        res = res*10 + digit;
    }
    
    while(res > 0 ){
        digit = res%10;
        result = result*10 + digit;
        res/=10;
    }
    return result;

}

int main(){
    int n;
    cin>>n;
    cout<<bi_to_dec(n);
}