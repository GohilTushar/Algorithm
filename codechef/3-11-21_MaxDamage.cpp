#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	    int mx=INT_MIN;
	        if(i<n-1){
	            mx=max(mx,a[i]&a[i+1]);
	        }
	        if(i>0){
	            mx=max(mx,a[i]&a[i-1]);
	        }
	        cout<<mx<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
