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
#define MX                      100002
#define pdd                     pair<double,double>

vector<pair<double,double> >we,me;
vector<pdd>v;
double dis;

void check()
{
    int s=v.size();
    double aa=0;
    for(int i=0; i<s; i++)
    {
        aa+=(v[i].ff*v[(i+1)%s].ss)-(v[i].ss*v[(i+1)%s].ff);
    }
    //cout<<x<<" "<<y<<""<<k<<" "<<aa<<endl;
    if(aa<0) aa*=-1;
    dis+=aa;
    v.clear();
   // cout<<endl<<dis<<endl;
    return ;
}
double cross(pdd p,pdd q)
{
    return p.ff*q.ss-p.ss*q.ff;
}
double orient(pdd a,pdd b,pdd c)
{
    pdd p=mp(b.ff-a.ff,b.ss-a.ss);
    pdd q=mp(c.ff-a.ff,c.ss-a.ss);
    return cross(p,q);
}

int main()
{

    int ii=0,ap;
    double p1,p2;
    int t,n;
    while(sf("%d",&n))
    {
        if(n==0) break;
        double x,y;
        ii++;
        we.clear();
        me.clear();
        p1=1003,p2=1003;
        vector<pair<double,double> >h(102);
        map<pdd,int>vis;
        for(int i=0; i<n; i++)
        {
            sf("%lf %lf",&x,&y);
            if(x<p1 || (x==p1 && y<p2))
            {
                ap=i; p1=x,p2=y;
            }
            we.pb(mp(x,y));
        }
    for(int i=ap;i<n;i++)
        me.pb(we[i]);
    for(int i=0;i<=ap;i++)
        me.pb(we[i]);
        sort(we);
        int k=0;
        for(int i=0; i<n; i++)
        {
            while(k>=2 && orient(h[k-2],h[k-1],we[i])<=0)
            {
                k--;
            }
            h[k++]=we[i];
        }

        int taken=k+1,tt=k;
        for(int i=n-2; i>=0; i--)
        {
            while(k>=taken && orient(h[k-2],h[k-1],we[i])<=0) k--;
            h[k++]=we[i];
        }
     for(int i=0;i<k;i++)
        vis[h[i]]=11;
        int j=0;
        dis=0;

     for(int i=0;i<=n;i++)
     {
         if(vis[me[i]]!=11)
         {
             while(vis[me[i]]!=11)
             {
                   v.pb(me[i-1]);
                 i++;
             }
             v.pb(me[i-1]);
             v.pb(me[i]);
             check();
         }
     }
        for(int i=0; i<k-1; i++)
            v.pb(h[i]);
        double d1=dis;
        dis=0;
        check();
        d1=(d1*100)/dis;
        pf("Tile #%d\n",ii);
        pf("Wasted Space = %.2f",d1);
        cout<<" %"<<endl<<endl;
    }

    return 0;
}

