#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,s;
    cin>>n>>s;
    int p[n];
    int df[n];
    int mind=100;
    int minf=100;
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>df[i];
    }
   
   
    for (int i = 0; i < n; i++)
    {
        if(df[i]==0){
            
                mind=min(mind,p[i]);
            
        }
        else if(df[i]==1){
            
                minf=min(minf,p[i]);
            
        }
    }
    if(s+minf+mind <= 100){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    }
return 0;
}