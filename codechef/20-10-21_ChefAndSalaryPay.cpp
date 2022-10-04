#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int cnt=0;
        int k=0;
        int mx=INT_MIN;
        for (int i = 0; i < 30; i++)
        {
            if(s[i] =='1'){
                cnt++;
                k++;
            }
           else{
            mx=max(mx,k);
            k=0;
            }
        }
        if(k>mx)
        cout<<cnt*x+k*y<<endl;
        else
        cout<<cnt*x+mx*y<<endl;
    }
return 0;
}