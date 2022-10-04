#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int cnt0=0;
        int cnt1=0;
        for (int i = 0; i < s.length(); i++)
        {
            // cout<<s[i]<<endl;
            if(s[i]=='0'){
                cnt0++;
                // cout<<"cnt0 "<<cnt0<<endl;
            }
            else if(s[i]=='1'){
                cnt1++;
                // cout<<"cnt1 "<<cnt1<<endl;
            }
        }
        cout<<(a*cnt0)+(b*cnt1)<<endl;
        
    }

return 0;
}