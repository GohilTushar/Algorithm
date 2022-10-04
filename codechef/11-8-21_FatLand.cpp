#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int count=0;
        int n;
        cin>>n;
        while(n>0){
        int d=sqrt(n);
        n-=d*d;
        count++;
        }
        cout<<count<<endl;
    }
    
return 0;
}