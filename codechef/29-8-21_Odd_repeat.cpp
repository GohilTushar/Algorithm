#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,s;
        int sum=0;
        cin>>n>>k>>s;

        for (int i = 1; i <=n; i++)
        {
            sum+=(2*i)-1;
        }
        int j=1;
        while(j<=n){
    if(k*(2*j-1)+sum-(2*j-1)==s){
               cout<<(2*j-1)<<endl;
               break;
           }
           else{
               j++;
               continue;
           }
        }
      
       
    }
return 0;
}