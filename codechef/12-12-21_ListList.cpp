#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> v(n);
        for(auto&i:v){
            cin>>i;
        }
        map<long long int,long long int>m;
        for(auto&k:v){
            m[k]++;
        }
        long long int freq=INT_MIN;
        for(auto j:m){
            freq=max(freq,j.second);
        }
        int ans;
        if(n==1|| freq==n){
            ans=0;
        }
        else if(freq==1 ){
            ans=-1;
        }
        else{
            ans=(n-freq)+1;
        }
        cout<<ans<<endl;
    }
return 0;
}
