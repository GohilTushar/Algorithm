#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int sum=(n*(n+1)/2)-s;
        if(sum>=1 && sum<=n){
            cout<<sum<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
return 0;
}