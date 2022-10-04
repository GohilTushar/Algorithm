#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int k=(n+1)*y;
    if(k>=x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}