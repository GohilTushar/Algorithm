/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int k=0;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]%2==0 && (i+1)%2==0){
                swap(a[i],a[i+1]);
            }
            if(a[i]%2==1 && (i+1)%2==1){
                swap(a[i],a[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0 && (i+1)%2==1){
                k++;
            }
            if(a[i]%2==1 && (i+1)%2==0){
                k++;
            }
        }
        cout<<k<<endl;
    }
return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int e1=n/2;
        int o1=n-e1;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int e2=0,o2=0;
         for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                e2++;
            }
            else{
                o2++;
            }
        }
        int x=min(e1,o2)+min(o1,e2);
        cout<<x<<endl;
    }
return 0;
}