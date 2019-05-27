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
#define lcd(a,b)     (a/gcd(a,b))*b
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
#define dist(ax,bx,ay,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define sf                        scanf
#define pf                        printf
#define MX                      10000007


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<lli,lli> >v;
        int n;
        lli x,y;
       sf("%d",&n);
       for(int i=0;i<n;i++)
       {
           sf("%lld %lld",&x,&y);
           v.pb(mp(x,y));
       }
        sort(v);
        double mx=0,dis=0;
        for(int i=n-2;i>=0;i--)
            {
                pair<lli,lli>we=v[i];
               if(we.ss>mx)
               {
                   lli b,a=v[i].ff-v[i+1].ff;
                   b=v[i].ss-v[i+1].ss;
                   double x=(double)((a*mx)+(b*v[i].ff)-(a*v[i].ss))/b;
                   dis+=((double)sqrt(dist(v[i].ff,x,v[i].ss,mx)));
                   mx=we.ss;
                    //pf("%.2f\n",dis);
               }
            }
       pf("%.2f\n",dis);


    }
   return 0;
}

