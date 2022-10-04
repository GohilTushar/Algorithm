#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==1)cnt++;
        }
        if(cnt%2==1)cnt--;
        cout<<cnt/2<<endl;
        
    }
return 0;
}