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
           
        }
        int g=a[0];
        for(int i=1;i<n;i++){
             g =__gcd(g,a[i]);
            if(g%2==0 ){
                cnt++;
            }
            else{
                continue;
            }
        }
        cout<<cnt<<endl;
        
    }
return 0;
}