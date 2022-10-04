#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        int p=x+(a*k);
        int q=y+(b*k);
        if(p<q){
            cout<<"PETROL"<<endl;
        }
        else if(q<p){
            cout<<"DISEL"<<endl;
        }
        else{
            cout<<"SAME PRICE"<<endl;
        }
    }
return 0;
}