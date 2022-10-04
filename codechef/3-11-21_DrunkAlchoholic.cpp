#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        if(k%2==0){
            cout<<(k/2)*3 - (k/2)<<endl;
        }
        else{
            cout<<(k/2 + 1)*3 - (k/2)<<endl;
        }
    }
return 0;
}