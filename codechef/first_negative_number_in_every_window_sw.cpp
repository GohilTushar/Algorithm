// k = 3
// 12 -1 -7 8 -15 30 16 28
// -1 -1 -7 -15 -15 0

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr,int n,int k)
{
    vector<int> ans;
    deque<int> dq;

    int i=0,j=0;
    while (j<n)
    {
        if(arr[j]<0)   
            dq.push_back(arr[j]);

        if(j-i+1 < k)
            j++;
        
        else if (j-i+1 == k)
        {
            if(!dq.empty()){
                
                ans.push_back(dq.front());
            }
            else
                ans.push_back(0);
            
            if(arr[i] == dq.front()){
                dq.pop_front();
            }
            
            i++;
            j++;

        }

    }
    
    return ans;
}
int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    vector<int>ans = solve(arr,n,k);
    
    
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}
