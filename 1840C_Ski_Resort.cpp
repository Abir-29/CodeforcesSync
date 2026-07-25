#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    arr.push_back(q + 1);
    ll conse_cnt = 0;
    ll ans = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (arr[i] <= q)
        {
            conse_cnt++;//magic
        }
        else
        {
            if (conse_cnt >= k)
            {
                ll d = conse_cnt - k + 1;
                ans += d * (d + 1) / 2;
            }
            conse_cnt = 0;
        }
    }
    cout << ans << endl;
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