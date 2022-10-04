#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool check=0;
     for (int  i = 0; i < n; i++)
    {
        if(a[i]==a[n-i-1]  && a[0]==1){
            if((a[i]<=7 && a[i]>=1)){
               if(n%2==1  && a[n/2]==7){
                   check=1;
               }
               else if(n%2==0  && a[(n/2)-1]==7){
                   check=1;
               }
            }
         
        }
        else {
           check=0;
           break;
        }
    }
    if(check){
         cout<<"yes"<<endl;
    }
    else{
         cout<<"no"<<endl;
    }
    }
return 0;
}