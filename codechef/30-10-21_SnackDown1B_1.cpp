#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    char result[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            result[i][j]='.';
	        }
	    }
	     result[n-2][1]='Q';
	    int k=n;
	    int l=0;
	    int m=n-3;
	    while(m--){
	        k--;
	        result[l][k]='Q';
	        l++;
	    
	    }
	     for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	           cout<<result[i][j];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
