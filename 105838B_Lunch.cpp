#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a,b,c;
    cin>>a>>b>>c;
 
    if(a==b==c)
    {
        cout<<-1<<endl;
    }
    else{
        if(a== b && b!=c && c<a &&c<b) cout<<a<<" "<<c<<" "<<b<<endl;
        else if(b==c && b!=a && a<b &&a<c) cout<<b<<" "<<a<<" "<<c<<endl;
        else if(a==c && c!=b && b<a && b<c) cout<<a<<" "<<b<<" "<<c<<endl;
        else if (a<b && a<c) cout<<b<<" "<<a<<" "<<c<<endl;
        else if (b<a && b<c) cout<<a<<" "<<b<<" "<<c<<endl;
        else if (c<a && c<b) cout<<a<<" "<<c<<" "<<b<<endl;
        else cout<<-1<<endl;
    }
 
    return 0;
}