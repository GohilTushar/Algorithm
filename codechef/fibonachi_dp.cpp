// fibonachi number

// TC = O(n)
// SC = O(n)+O(n) => recursion stack + vector

#include<bits/stdc++.h>
using namespace std;

int solve(int n,vector<int>&dp){
    if(n<=1)
        return n;
    
    if(dp[n]!=-1)
        return dp[n];
    
    return dp[n] = solve(n-1,dp) + solve(n-2,dp);
}

// TC = O(n)
// SC = O(1)
int solveOptimize(int n){
    int prev = 1;
    int prev2 = 0;

    for(int i=2;i<=n;i++){
        int curr = prev2 + prev;

        // cout<<"prev "<<prev<<" prev2 "<<prev2<<endl;
        prev2 = prev;
        prev = curr;
    }
    return prev;
}
int main()
{
    int n;
    cin>>n;
    // vector<int> dp(n+1,-1);

    // cout<<solve(n,dp)<<endl;

    cout<<solveOptimize(n)<<endl;
    return 0;
}

