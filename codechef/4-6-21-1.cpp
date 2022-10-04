
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--){
		int n;
		int flag=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i] == i+1){
				flag=1;
				
			}
			else{
				flag=0;
                break;
			}
		}
		if(flag==1){
			cout<<"HAPPY"<<endl;
		}
		else{
			cout<<"ANGRY"<<endl;
		}
        cout<<flag<<endl;
	}
return 0;
}
#include<iostream>
using namespace std;

int main(){
    
return 0;
}