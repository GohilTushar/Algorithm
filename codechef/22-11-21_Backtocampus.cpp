#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int day=0;
        while(n>0){
            day++;
            n-=k;
        }
        cout<<day<<endl;
    }
return 0;
}