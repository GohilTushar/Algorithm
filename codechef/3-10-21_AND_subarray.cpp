
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=1;
        while(k<=n){
            k*=2;
        }
        k/=2;
        if(k/2>n+1-k){
            cout<<k/2<<endl;
        }
        else{
            cout<<n+1-k<<endl;
        }
    }
return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--){
	   long int n;
	    cin>>n;
	    long int p=log(n)/0.693;
	    long int k=pow(2,p);
	    long int x=k/2;
	    long int y=n-k+1;
	    if(x>y){
	        cout<<x<<endl;
	    }
	    else{
	        cout<<y<<endl;
	    }
	}
	return 0;
}
*/