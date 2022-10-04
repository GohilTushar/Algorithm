/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int i=0;
        int j=n;
        while(i<j){
        int k=i+j;
        if(i+j==s){
            cout<<j-i<<endl;
            break;
        }
        else if(k<s){
            i++;
        }
        else if(k>s){
            j--;
        }
        }
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
        int n,s;
        cin>>n>>s;
        if(s>=n){
            cout<<2*n-s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
return 0;
}