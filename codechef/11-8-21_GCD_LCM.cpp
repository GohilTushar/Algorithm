#include <bits/stdc++.h>
using namespace std;
long long int GCD(long long int x, long long int y)
{
if(y==0){
return x;
}
if(x==0){
    return y;
}
return GCD(y,x%y);
}
long long int LCM(long long int x, long long int y)
{
   return (x*y)/GCD(x,y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << GCD(a, b) << " " << LCM(a, b) << endl;
    }
    return 0;
}