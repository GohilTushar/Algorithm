#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[5];
        for (int  i = 0; i < 5; i++)
        {
            cin>>a[i];
        }
        int c1=0;
        int c2=0;

         for (int  i = 0; i < 5; i++)
        {
          if(a[i]==1){
               c1++;
           }
           else if(a[i]==2){
               c2++;
           }
        }

        
        if(c1 > c2){
            cout<<"INDIA"<<endl;
        }
        else if( c2 > c1){
            cout<<"ENGLAND"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
        
    }
return 0;
}