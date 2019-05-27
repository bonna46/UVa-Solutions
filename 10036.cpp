#include<bits/stdc++.h>
using namespace std;

#define lli          int long long
#define llu          unsigned long long
#define pb           push_back
#define mp           make_pair
#define READ         freopen("in.txt","r",stdin);
#define WRITE        freopen("outer.txt","w",stdout);
//#define sort(v)      sort(v.begin(),v.end())
#define M            100000007

lli n,d,ar[10003],dp[10003][102];
lli dfs(lli pos,lli sum)
{
    sum=((sum%d)+d)%d;
   if(pos==n+1)
   {
       if(sum%d==0)
        return 1;
       else
        return 0;
   }
   if(dp[pos][sum]!=-1) return dp[pos][sum];
   lli newval,nval;
   newval=sum+ar[pos+1];
    nval=sum-ar[pos+1];
    newval=((newval%d)+d)%d;
    nval=((nval%d)+d)%d;
    lli a=dfs(pos+1,newval);
      lli b=dfs(pos+1,nval);
      if(a>=1 || b>=1)
      return dp[pos][sum]=2;
      return dp[pos][sum]=0;
}

int main()
{
    lli t,x;
    scanf("%lld",&t);
    for(lli t1=1; t1<=t; t1++)
    {
        scanf("%lld %lld",&n,&d);
        for(lli i=1; i<=n; i++)
        {
            scanf("%lld",&x);
            ar[i]=((x%d)+d)%d;
        }
        ar[n+1]=0;
        memset(dp,-1,sizeof dp);
            lli p=dfs(1,ar[1]);
            if(p>=1)
            printf("Divisible\n");
            else printf("Not divisible\n");
    }
    return 0;

}
