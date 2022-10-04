#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    char s[4][11];
        char k[4][11];
	    for(int i=0;i<4;i++){
	        cin>>s[i];
	    }
	    for(int j=0;j<4;j++){
	        cin>>k[j];
	    }
	    int count=0;
	    for(int i=0;i<4;i++){
	        for(int j=0;j<4;j++){
	            if(strcmp(s[i],k[j]) == 0){
	                count++;
	            }
	           
	        }
	    }
	    if(count>=2){
	        cout<<"similar"<<endl;
	    }
	    else{
	        cout<<"dissimilar"<<endl;
	    }
	}
	return 0;
}

