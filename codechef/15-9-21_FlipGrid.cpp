#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
      
        if(n%2==1){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j){
                    a[j]=1;
                cout<<a[j]<<" ";
                }
                else{
                    a[j]=-1;
                    cout<<a[j]<<" ";
                }
                
            }
            cout<<endl;
        }
        }
        else{
              for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[j]=-1;
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        }
        
        
    }
return 0;
}