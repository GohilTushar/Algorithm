#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<p;i++){
            if(a[i]==0){
                sum+=x;
            }
            else{
                sum+=y;
            }
        }
        cout<<sum<<endl;
    }
return 0;
}