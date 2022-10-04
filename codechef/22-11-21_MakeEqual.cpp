#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &i:v){
            cin>>i;
        }
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,v[i]);
            mn=min(mn,v[i]);
        }
       int k=mx-mn;
      
       cout<<k<<endl;
    }
return 0;
}