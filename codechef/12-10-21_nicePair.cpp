// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long int t;
//     cin>>t;
//     while(t--){
//        long long int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         long long int i=0;
//         long long int j=n-1;
//         int count=0;
//         while(i<j){
//             int k=s[j]-s[i];
//             if(k<0){
//                 k*=-1;
//             }
//             if(k == j-i){
//                 count++;
//                 j--;
//             }
//             else{
//                 j--;
//             }
//             if(j==i){
//                 i++;
//                 j=n-1;
//             }
//         }
//         cout<<count<<"\n";
        
//     }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<int,int> a;
        map<int,int> b;
        map<int,int> :: iterator it;
        for (int i = 0; i < n; i++)
        {
            a[i-(s[i]-48)]++;
            b[i+(s[i]-48)]++;
        }
        int ans=0;
        for(auto it=a.begin();it!=a.end();it++){
            ans += (it->second*it->second-1)/2;
        }
        for(auto it=b.begin();it!=b.end();it++){
            ans += (it->second*it->second-1)/2;
        }
    }
return 0;
}