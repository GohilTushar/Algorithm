#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,l;
        int k=n-x;
        if(k<x){
            cout<<k*l<<endl;
        }
        else{
            cout<<x*l<<endl;
        }
    }
return 0;
}