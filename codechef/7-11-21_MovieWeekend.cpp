#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int product[n];
        int index;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int mx=INT_MIN;
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            product[i]=a[i]*b[i];
           if(product[i]>mx){
               mx=product[i];
               index=i;
           }
        else if(product[i]==mx){
            if(b[i]>b[index])
            index=i;
        }
        }
        cout<<index+1<<endl;
    }
return 0;
}