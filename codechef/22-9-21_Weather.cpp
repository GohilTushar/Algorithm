#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        int k1=0;
        int k0=0;
        for(int i=1;i<=7;i++){
            cin>>x;
            if(x==1){
                k1++;
            }
            else{
                k0++;
            }
        }
        if(k1>k0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}