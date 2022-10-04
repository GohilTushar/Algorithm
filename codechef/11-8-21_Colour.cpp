#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=0,b=0,c=0;
        string s;
        cin>>s;
       
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                a++;
            }
            else if(s[i]=='G'){
                b++;
            }
            else if(s[i]=='B'){
                c++;
            }
        }
        int k=max(a,b);
        int j=max(k,c);
        cout<<n-j<<endl;

    }
    
return 0;
}