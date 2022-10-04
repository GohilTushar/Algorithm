#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool check=0;
    for(int i=0;i<n-1;i++){
        
       if((s[i]=='L' && s[i+1] == 'L' )|| (s[i]=='R' && s[i+1] == 'R')){
       check=1;
       break;
       }
    }
       if(check){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
return 0;
}