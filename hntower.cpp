#include<iostream>
#include<cmath>
using namespace std;


int hntower( int n ){
    if(n == 2 ) return 3;
    return hntower(n-1) + pow(2,n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<hntower(n);

}   