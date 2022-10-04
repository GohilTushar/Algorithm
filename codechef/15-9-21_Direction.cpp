#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=n%4;
        switch(k){
            case 1:
            cout<<"East"<<endl;
            break;

            case 2:
            cout<<"South"<<endl;
            break;

            case 3:
            cout<<"West"<<endl;
            break;

            case 0:
            cout<<"North"<<endl;
            break;
        }
    }
return 0;
}