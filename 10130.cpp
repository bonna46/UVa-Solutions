#include<bits/stdc++.h>
using namespace std;

#define lli          int long long
#define llu          unsigned long long
#define pb           push_back
#define mp           make_pair
#define READ         freopen("in.txt","r",stdin);
#define WRITE        freopen("outer.txt","w",stdout);
#define sort(v)      sort(v.begin(),v.end())
#define M            100000007

lli coin[1004],capacity[1004];
lli n,x,dp[1003][33];

lli call(lli pos,lli value)
{
    if(pos==n)
        return 0;
   if(dp[pos][value]!=-1) return dp[pos][value];
   lli p1=0,p2;
   if(value+capacity[pos]<=x)
    p1=coin[pos]+call(pos+1,value+capacity[pos]);
   p2=call(pos+1,value);
   p1=max(p1,p2);
   return dp[pos][value]=p1;
}

int main()
{
    lli t,co,we,q;
    scanf("%lld",&t);
    for(lli t1=1; t1<=t; t1++)
    {
        scanf("%lld",&n);
        for(lli i=0; i<n; i++)
        {
            scanf("%lld %lld",&co,&we);
            capacity[i]=we;
            coin[i]=co;
        }
        scanf("%lld",&q);
        lli sum=0;
        for(lli i=1; i<=q; i++)
        {
            memset(dp,-1,sizeof dp);
            scanf("%lld",&x);
            lli pp=call(0,0);
            sum+=pp;
          //  cout<<" "<<pp;
        }
        printf("%lld\n",sum);
    }
    return 0;

}
