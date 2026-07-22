#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    string n;
    cin>>n;
    for(int i= 0;i<n.size()-1;i++)
    {
        if(n[i]<n[i+1]){
            swap(n[i], n[i+1]);
            break;
        }
    }
    cout<<n<<endl;
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