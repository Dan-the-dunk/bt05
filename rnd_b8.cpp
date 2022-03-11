#include<iostream>
using namespace std;

int rnd(double n){
    double dvi = n - (int)n;
    if(dvi >= 0.5) n = (int)n + 1;
    else n = (int)n;
    return n;
    
    
}
int main(){
    double n;
    cin>>n;
    cout<<rnd(n);
}


