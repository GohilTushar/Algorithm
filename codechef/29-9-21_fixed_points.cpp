#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n-k==1){
            cout<<"-1"<<endl;
        }
        else{
            int a[n];
            for(int i=0;i<n;i++){
                a[i]=i+1;
            }
          for(int i=0;i<n-k-1;i++){
              swap(a[i],a[i+1]);
          }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}