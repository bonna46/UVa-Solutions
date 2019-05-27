#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include <cstdio>
#include <string>
#include <cstring>   //for memset
#include <algorithm>
//#include<set>
//#include<vector>
//#include<queue>
//#include<utility>    //for pair
using namespace std;

#define llu                     unsigned long long
#define lli                     int long long
#define pb                      push_back
#define mp                      make_pair
#define dif(ax,ay,bx,by)        sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define READ                    freopen("in.txt","r",stdin);
#define WRITE                   freopen("outer.txt","w",stdout);
//#define sort(v)                 sort(v.begin(),v.end())
#define REP(i,n)                for(i=0; i<n; i++)
#define REV(i,n)                for(i=n; i>=0; i--)
#define FOR(i,p,k)              for(i=p; i<k; i++)
#define SZ(a)                   (int)a.size()
#define M                        1000000000
#define ff                       first
#define ss                       second
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};
int dp[50002],n;
int coin[103];

int main()
{
   int t;
   cin>>t;
   coin[0]=0;
   for(int t1=1;t1<=t;t1++)
   {
       cin>>n;
       int mid=0;
       for(int i=1;i<=n;i++)
       {
         scanf("%d",&coin[i]);
         mid+=coin[i];
       }
       int sum=mid;
       mid=mid/2;
        sort(coin,coin+n);
       memset(dp,0,sizeof dp);
       dp[0]=-1;
       for(int i=1;i<=n;i++)
       {
           int p=coin[i];
           for(int j=p;j<=mid;j++)
           {
               if(dp[j]==0)
               {
                   if(dp[j-p]==0)
                    dp[j]=0;
                   else if(dp[j-p]!=i)
                    dp[j]=i;
               }
           }
       }
       int pos;
       for(int i=mid;i>=0;i--)
       {
           if(dp[i]!=0)
           {
               pos=i;break;
           }
       }
       sum=sum-pos;
       int b=abs(sum-pos);
       printf("%d\n",b);
   }
    return 0;
}
