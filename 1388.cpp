#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>
#include<string>
#include<cstring>   //for memset
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<deque>
#include<stack>
#include<list>
#include<iterator>
#include <iomanip>
#include<numeric>
//#include<unordered_map>
//#include<unordered_set>


using namespace std;



#define lli            long long int
#define ull           unsigned long long
#define ld            long double    //printf("%.9Lf")
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/__gcd(a,b))*b
#define cs(p)         printf("Case %d:\n",(p))
#define EPS           1e-9
#define inf           INT_MAX
#define M                             1000000007
#define MINI                         -1000000003
#define READ                         freopen("in.txt","r",stdin);
#define WRITE                        freopen("outer.txt","w",stdout);
#define sort(t)                      sort(t.begin(),t.end())
#define reverse(t)                  reverse(t.begin(),t.end())
#define ff                          first
#define ss                          second
#define otivuj(dx,dy)              sqrt(dx*dx+dy*dy)
#define dist(ax,bx,ay,by)        sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define sf                        scanf
#define pf                        printf
#define MX                     100000000002
#define pdd                     pair<int,int>
lli ad[2005],pq[1003];
lli n,m;
lli dp[1003][2005];

lli dop(int p,int ind)
{
    if(p==n) return 0;
    if(ind>=n+m-1) return MX;
    if(dp[p][ind]!=-1) return dp[p][ind];
    lli dis1=MX,dis2=MX,d;
   for(int i=ind;i<n+m;i++)
   {
       if(ad[i]<=pq[p] && pq[p]<=ad[i+1])
          {
              if(i==ind)
              {
                  d=ad[i+1]-pq[p];
                  d+=dop(p+1,i+1);
                  break;
              }
              else if(i==n+m-1)
              {
                  d=pq[p]-ad[i];
                  d+=dop(p+1,i);
                  break;
              }
              else
              {
                   dis1=pq[p]-ad[i];
                    dis1+=dop(p+1,i);
                    dis2=ad[i+1]-pq[p];
                    dis2+=dop(p+1,i+1);
                d=min(dis1,dis2);
                break;
              }
          }
   }
   return dp[p][ind]=d;
}

int main()
{

   while(sf("%lld %lld",&n,&m)!=EOF)
   {
       memset(dp,-1,sizeof dp);
       lli sum=0;
       for(int i=0;i<=n+m;i++)
        {
            ad[i]=sum;
            sum+=n;
        }
        sum=0;
         for(int i=0;i<=n;i++)
        {
            pq[i]=sum;
            sum+=n+m;
        }
        lli p=dop(1,0);
        double pp=p,ps=n*(n+m);
        pp=(double)(pp*10000)/(ps);
        pf("%.4f\n",pp);
   }
    return 0;
}
