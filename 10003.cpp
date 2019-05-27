#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
//#include<set>
//#include<queue>
//#include<utility>    //for pair
using namespace std;

#define llu          unsigned long long
#define lli         int long long
#define pb           push_back
#define mp           make_pair
#define READ         freopen("in.txt","r",stdin);
#define WRITE        freopen("outer.txt","w",stdout);
#define sort(v)      sort(v.begin(),v.end())
#define REP(i,n)     for(i=0; i<n; i++)
#define REV(i,n)     for(i=n; i>=0; i--)
#define FOR(i,p,k)   for(i=p; i<k; i++)
#define SZ(a)        (int)a.size()
#define M            1000000000
#define ff            first
#define ss            second
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};
lli ar[63],dp[1002][1003];
int n;

lli call(lli upp,lli dow)
{
   if(dp[upp][dow]!=-1)
        return dp[upp][dow];
    lli a=dow-upp;
    lli x=M;
    for(int i=1; i<=n; i++)
    {
        if(ar[i]>upp && ar[i]<dow)
        {
            lli k=call(upp,ar[i])+call(ar[i],dow);
            x=min(x,k);
        }
    }
    if(x==M)
        return dp[upp][dow]=0;
    return dp[upp][dow]=x+a;
}


int main()
{
    int l;
    while(cin>>l)
    {
        if(l==0)
            break;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&ar[i]);
        }
        memset(dp,-1,sizeof dp);
        lli pp=call(0,l);
        printf("The minimum cutting is %lld.\n",pp);
    }

    return 0;
}
