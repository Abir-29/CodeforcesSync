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
        int mx = INT_MIN;
        int idx = -1;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(mx<arr[i])
            {
                mx = arr[i];
                idx = i;
            }
        }
        int mx2 = INT_MIN;
        for(int i=0;i<n-1;i++){
            mx2 = max(mx2, arr[i]);
            if(mx2<=i+1){
                swap(arr[i], arr[idx]);
                break;
            }
        }
        for(int i = 0 ;i< n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
 
    return 0;
}