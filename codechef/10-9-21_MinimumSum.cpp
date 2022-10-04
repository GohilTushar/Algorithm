#include<bits/stdc++.h>
using namespace std;
int sum(int n,int i){
    int rem=0;
   
        while(n){
            rem+=n%i;
            n/=i;
        }
    
    return rem;
}
int MinSum(int n,int l,int r){
 
    int base=0;
    int sum1=INT_MAX;
    for(int i=r;i>=l;i--){
        if(r>=n && n%i==0){
            return i;
        }
      int k = sum(n,i);
       if(k<=sum1){
           sum1=k;
           base=i;
       }
    }
    return base;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int j=MinSum(n,l,r);
        cout<<j<<endl;

    }
return 0;
}

