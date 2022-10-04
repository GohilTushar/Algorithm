#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int j=k;
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                j--;
            }
            else{
                j=k;
            }
            if(j==0){
                j=k;
                cnt++;
            }
        }
        
    cout<<cnt<<endl;
    }
return 0;
}