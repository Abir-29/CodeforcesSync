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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt =0;
        char prev = '#';
        for(int i=0;i<n;i++)
        {
            if(s[i] != prev) {
                prev = s[i];
                cnt++;
            }
        }
        if(cnt == 2)
        {
            cout<<2<<endl;
        }
        else
        cout<<1<<endl;
    }
 
    return 0;
}