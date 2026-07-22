#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<long long> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    vector<long long> arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    long long d = 0;
    for (int i = 0; i < n; i++)
    {
        d += arr2[i] - arr1[i];
        if (d < 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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