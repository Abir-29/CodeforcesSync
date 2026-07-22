#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int d = INT_MAX;
    int evens = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % k == 0)
        {
            d = 0;
        }
        else
            d = min(d, k - arr[i] % k);
        if (arr[i] % 2 == 0)
            evens++;
    }
    if (k != 4)
    {
        cout << d << endl;
        return;
    }
    if (evens >= 2)
    {
        cout << 0 << endl;
    }
    else if (evens == 1)
    {
        cout << min(d, 1) << endl;
    }
    else
    {
        cout << min(d, 2) << endl;
    }
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