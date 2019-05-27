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
#include<queue>
#include<stack>
#include<list>
#include<iterator>
#include <iomanip>
#include<numeric>
//#include<unordered_map>
//#include<unordered_set>


using namespace std;

#define llu                    unsigned long long
#define lli                     int long long
#define ld                      long double    //printf("%.9Lf")
#define pb                      push_back
#define mp                      make_pair
#define pi                      acos(-1)
#define dif(ax,ay,bx,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define READ                    freopen("in.txt","r",stdin);
#define WRITE                   freopen("outer.txt","w",stdout);
#define sort(v)                 sort(v.begin(),v.end())
#define REP(i,n)                for(i=0; i<n; i++)
#define REV(i,n)                for(i=n; i>=0; i--)
#define FOR(i,p,k)              for(int i=p; i<k; i++)
#define SZ(a)                   (int)a.size()
#define M                      10000000
#define ff                       first
#define ss                       second
#define sf                       scanf
#define pf                       printf
//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};
vector<pair<lli,lli> >v;

int main()
{
   lli n,x,y;
   int t=1;
   while(sf("%lld",&n))
   {
       if(n==0) break;
       v.clear();
       for(lli i=0;i<n;i++)
       {
           sf("%lld %lld",&x,&y);
           v.pb(mp(y,x));
       }
       sort(v);
   reverse(v.begin(),v.end());
   lli mx=0,sum=0;
   for(lli i=0;i<n;i++)
   {
       sum+=v[i].ss;
       mx=max(mx,sum+v[i].ff);
   }
   pf("Case %d: %lld\n",t,mx);
   t++;
   }
    return 0;
}
