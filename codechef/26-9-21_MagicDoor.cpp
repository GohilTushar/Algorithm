#include<bits/stdc++.h>
using namespace std;
void change(string& k){
    for(int i=0;i<k.length();i++){
        if(k[i] =='0'){
            k[i]='1';
        }
        else{
            k[i]='0';
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long int cnt=0;
        for(long int i=0;i<s.length();i++){
            if(s[i]=='0'){
                cnt++;
                change(s);
            }
            else{
                continue;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}