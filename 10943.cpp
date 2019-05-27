#include<bits/stdc++.h>
using namespace std;

#define lli          int long long
#define llu          unsigned long long
#define pb           push_back
#define mp           make_pair
#define READ         freopen("in.txt","r",stdin);
#define WRITE        freopen("outer.txt","w",stdout);
#define sort(v)      sort(v.begin(),v.end())
#define M            1000000

lli dp[205][105];

lli func(lli n,lli r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n%M;
    if(dp[n][r]!=-1) return dp[n][r];
    return dp[n][r]=((func(n-1,r)%M)+(func(n-1,r-1)%M))%M;
}

int main()
{
     memset(dp,-1,sizeof dp);
     for(int i=0;i<203;i++)
     dp[i][0]=1;
     lli t,a,b;
    while(scanf("%lld %lld",&a,&b))
    {
        if(a==0 && b==0) break;
   if(dp[a+b-1][b-1]==-1)
    dp[a+b-1][b-1]=func(a+b-1,b-1);
        printf("%lld\n",dp[a+b-1][b-1]);
    }
    return 0;

}
