#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+7;
int bash[10000000];
void solve()
{
    int n;
        cin>>n;
        int arr[n];
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
            c1++;
            else
            c2++;
        }

        if(c1==0 && (c2%2)==1)
        {   
            cout<<"NO\n";
            return ;
        }

        if(c1%2)
        {
            cout<<"NO\n";
            return ;  
        }

        cout<<"YES\n";
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    } 
}   