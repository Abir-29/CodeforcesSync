#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> A;
    vector<long long> b(n);
    map<long long, long long> B;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        A[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        B[b[i]]++;
    }
    long long ans = 0;
    for (auto ele : A)
    {
        long long freq = ele.second;
        if (freq > 1)
        {
            ans += freq * (freq - 1) / 2;
        }
    }
 
    for (auto ele : B)
    {
        long long freq = ele.second;
        if (freq > 1)
        {
            ans += freq * (freq - 1) / 2;
        }
    }
 
    cout << ans << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
 
    return 0;
}