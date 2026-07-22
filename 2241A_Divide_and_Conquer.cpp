#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        if(x>=y && x%y==0 && y!=0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}