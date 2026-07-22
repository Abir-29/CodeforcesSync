#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long x,y;
    cin>>x;
    long long tmp = x;
    int digitcnt = 0;
    while(tmp)
    {
        tmp/=10;
        digitcnt++;
    }
    long long d = pow(10, digitcnt) + 1;
    cout << d << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
 
    return 0;
}