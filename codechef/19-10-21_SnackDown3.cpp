#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<pair<int ,int>> v;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i].first>k){
            v[i].first=k;
            k++;
        }
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    }
return 0;
}