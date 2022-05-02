#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+7;
int bash[10000000];
int totalBills(int amount)
{   
    if(amount==0)
    return 0;

    int bills=0;

    if(amount>=100)
    {
        bills+=amount/100;
        amount=amount%100;
        int x=totalBills(amount);
        return bills+x;
    }
    if(amount>=20)
    {
        bills+=amount/20;
        amount=amount%20;
        int x=totalBills(amount);
        return bills+x;
    }
    if(amount>=10)
    {
        bills+=amount/10;
        amount=amount%10;
        int x=totalBills(amount);
        return bills+x;
    }
    if(amount>=5)
    {
        bills+=amount/5;
        amount=amount%5;
        int x=totalBills(amount);
        return bills+x;
    }
    if(amount>=1)
    {   
        
        bills+=amount;
        
        amount=0;
        int x=totalBills(amount);
        return bills+x;
    }
    return 0;
}
int32_t main()
{
    int amount;
    cin>>amount;

    cout<<totalBills(amount); 
   
}   