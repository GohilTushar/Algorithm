#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int s1=0;
    int s2=0;
    int k1=0;int k2=0;
    int lead1=0;int lead2=0;
    int player1,player2;
    for(int i=0;i<n;i++){
        cin>>player1>>player2;
        s1+=player1;
        s2+=player2;
    if(s1>=s2){
        k1=s1-s2;
         if(k1>lead1){
            lead1=k1;
    }
    }
    else{
        k2=s2-s1;
        if(k2>lead2){
            lead2=k2;
    }
    }
   
    }
    if(lead1>lead2){
        cout<<"1"<<" "<<lead1<<endl;
    }
    else{
        cout<<"2"<<" "<<lead2<<endl;
    }
return 0;
}