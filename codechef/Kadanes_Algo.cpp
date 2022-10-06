#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector <int>& v, vector <int> subarray)
{
    int msf = v[0],meh=0,s,e;
    for(int i=0; i<v.size(); i++)
    {
        s=0;
        meh+=v[i];
        if(msf<meh)
        {
            // subarray.clear();
            msf=meh;
            subarray.push_back(s);
            subarray.push_back(i);

        }
        if(meh<msf)
        {
            meh=0;
            e=i+1;
        }
    }
    return msf;
}

int main()
{
    vector <int> v;
    vector <int> v1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<maxSubarray(v,v1);
    return 0;
}