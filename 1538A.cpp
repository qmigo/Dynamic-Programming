#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+7;
int bash[10000000];
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        arr[0]=-1;
        int lo=INTMAX_MAX;
        int hi=-1;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            lo=min(lo,arr[i]);
            hi=max(hi,arr[i]);
        }
        int k=0;
        int lowindex,highindex;
        for(auto i:arr)
        {
            if(i==lo)
            lowindex=k;
            if(i==hi)
            highindex=k;
            k++;
        }
        int a[4];
         a[0]=max(lowindex,highindex);
         a[1]=max((n-lowindex+1),(n-highindex+1));
         a[2]=lowindex+(n-highindex)+1;
         a[3]=(n-lowindex+1)+highindex;
            int ans=INTMAX_MAX;
         for(auto i:a)
            ans=min(i,ans);

            cout<<ans<<"\n";
    } 
}   