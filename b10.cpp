#include<iostream>
#include<stdlib.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++ ){
        arr[i]=rand()%50;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arrdv[5] = {25,50,75,100,125};

    for(int j = 0 ; j < n - 2 ; j ++ ){
        for(int k = j + 1 ; k < n - 1 ; k ++ ){
            
            for(int l = k + 1 ; l < n  ; l ++ ){
                for(int i = 0 ; i < 5 ; i ++){
                    int dv = arrdv[i];
                    if( (arr[l] + arr[j] + arr[k])%dv == 0) {
                        cout<<arr[l]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                        break;
                    }
                }
            }
        }
    }
    

}