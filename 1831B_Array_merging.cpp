#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    set<ll> elements;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        elements.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        elements.insert(b[i]);
    }
    map<ll,ll> mp1,mp2;
    mp1[a[0]] = 1;
    ll cnt = 1;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            cnt++;
        }
        else cnt =1;
        mp1[a[i]] = max(mp1[a[i]], cnt);
    }
    mp2[b[0]] = 1;
    cnt = 1;
    for(int i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
        {
            cnt++;
        }
        else cnt =1;
        mp2[b[i]] = max(mp2[b[i]], cnt);
    }
    ll ans = 1;
    for(auto e: elements)
    {
        ans = max (ans, mp1[e] + mp2[e]);
    }
    cout<< ans <<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
 
    return 0;
}