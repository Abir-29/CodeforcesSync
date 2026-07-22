#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    cin>>n;
    long long mx = INT_MIN;
    vector<long long> arr(n);
    vector<int> check(n+1);
    check[0] = 1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        check[arr[i]] = 1;
    }
    for(int i = 0;i<n+1;i++)
    {
        if(check[i]==0) {cout<<i<<endl; return;}
    }
    cout<<-1<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
 
    return 0;
}