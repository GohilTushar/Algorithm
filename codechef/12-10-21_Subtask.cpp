#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        int sum=0;
        int sum1=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
         for (int i = 0; i < m; i++)
        {
            sum1+=a[i];
        }
        if(sum==n){
            cout<<"100"<<endl;
        }
        else if(sum1==m){
            cout<<k<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
return 0;
}