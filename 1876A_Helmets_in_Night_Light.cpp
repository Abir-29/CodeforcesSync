#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<ll> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    vector<ll> B(n);
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
        mn = min(mn, B[i]);
    }
    if(mn>=p)
    {
        cout<<p*n<<endl;
        return;
    }
    vector<pair<ll,ll>> viki(n);
    for(int i=0;i<n;i++)
    {
        viki[i].first = B[i];
        viki[i].second = A[i];
    }
    sort(viki.begin(), viki.end(), [](pair<ll,ll> &a, pair<ll,ll> &b){
        if(a.first== b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    });
    ll ans = p;
    ll j = 0;
    ll cnt = n - 1;
    while(j<n-1 && viki[j].first < p)
    {
        auto [f,s] = viki[j];
        ans += f*min(s, cnt);
        j++;
        cnt -= min(cnt, s);
        if(cnt <= 0) break;
    }
    ans += p * cnt;
    cout<<ans<<endl;
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