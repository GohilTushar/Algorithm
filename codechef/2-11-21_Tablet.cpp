#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,b;
        cin>>n>>b;
       int p,w,h;
       int mx=INT_MIN;
       bool check=1;
       for (int i = 0; i < n; i++)
       {
           cin>>p>>w>>h;
           if(p<b){
               check=0;
               int k=w*h;
               mx=max(mx,k);
           }
       }if(check)cout<<"no tablet";
        else cout<<mx<<endl;
    }
return 0;
}