#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,p,q;
        cin>>x>>y>>p>>q;

        int i=x+10*p;
        int j=y+10*q;

        if(i<j){
            cout<<"Chef"<<endl;
        }
        else if(j<i){
            cout<<"Cheflina"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
return 0;
}