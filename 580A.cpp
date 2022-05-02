#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+7;
int bash[10000000];
int solve()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {   
        int x;
        cin>>x;
        arr.push_back(x);
    }
    
    if(n==1)
    return 1;
    
    int l=0,k=1,ans=0;
    for(int r=1;r<n;r++)
    {   
        if(arr[r]<arr[r-1])
        {
            k=r-l;
            ans=max(ans,k);
            l=r;
        }
        if(r==n-1)
        {
            k=r-l+1;
            ans=max(k,ans);
        }
        ans=max(k,ans);
    }
    return ans;
}
int32_t main()
{
    
        cout<<solve();
     
}   