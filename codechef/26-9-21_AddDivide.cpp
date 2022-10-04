#include<bits/stdc++.h>
using namespace std;

int main(){
   long int t;
    cin>>t;
    while(t--){
       long long int a,b;
        cin>>a>>b;
        int sum=0;
        do{
        sum+=a;
        if(sum=9*a && sum!=b){
            break;
        }
        }
        while(sum%b!=0);
        
        if(sum%b==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}