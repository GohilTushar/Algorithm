#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int k=x+2*y;
        if(x==0 && y%2==0){
            cout<<"YES"<<endl;
        }
        else if(x==0 && y%2==1){
            cout<<"NO"<<endl;
        }
        if(k%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}