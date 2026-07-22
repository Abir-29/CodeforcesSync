#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> arrs(n);
        for (int i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            for (int j = 0; j < m; j++)
            {
                ll val;
                cin>>val;
                arrs[i].push_back(val);
            }
            sort(arrs[i].begin(), arrs[i].end());
        }
        ll mnIdx = -1;
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arrs[i][1] < mn)
            {
                mn = arrs[i][1];
                mnIdx = i;
            }
        }
        ll ans = 0;
        ll mint = INT_MAX;
        for(int i=0;i<n;i++)
        {
            mint = min(mint, arrs[i][0]);
        }
        ans+=mint;
        for(int i=0;i<n;i++)
        {
            if(i== mnIdx) continue;
            ans+= arrs[i][1];
        }
        cout<<ans<<endl;
    }
 
    return 0;
}