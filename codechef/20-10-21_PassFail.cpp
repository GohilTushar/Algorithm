#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int k=n-x;
        if(3*x-k>=p){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}