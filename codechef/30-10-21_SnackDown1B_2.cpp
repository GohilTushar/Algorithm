#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector <int> a;
	    for(int i=0;i<(1<<n);i++){
            int x;
            cin>>x;
	        a.push_back(x);
	    }
	    int mx=*max_element(a.begin(),a.end());
	    int mn=*min_element(a.begin(),a.end());
	    if(mx-mn<=1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
