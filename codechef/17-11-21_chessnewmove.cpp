#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int i=a+b;
        int j=x+y;
        if(a==x && b==y){
            cout<<"0"<<endl;
        }
        else if(i%2==j%2){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
        
    }
return 0;
}