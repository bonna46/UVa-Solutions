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
vector<pair<double,double> >we,h1[22];
double carea[22];
bool check(double x,double y,int k)
{
    int s=h1[k].size();
    double aa=0;
    for(int i=0; i<s; i++)
    {
        double ab=(h1[k][i].ff*h1[k][(i+1)%s].ss)+(h1[k][(i+1)%s].ff*y)+(x*h1[k][i].ss)-(h1[k][(i+1)%s].ff*h1[k][i].ss)-(x*h1[k][(i+1)%s].ss)
        -(h1[k][i].ff*y);
        if(ab<0) ab*=-1;
        aa+=ab;
    }
    //cout<<x<<" "<<y<<""<<k<<" "<<aa<<endl;
    if(aa==carea[k]) return true;
    else return false;
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
    int vis[22];
    memset(vis,0,sizeof vis);
    int t,n,ii=0;
    double a,b;
    while(sf("%d",&n))
    {
        if(n==-1) break;
        int cnt=0;
        double x,y;
        we.clear();
        vector<pair<double,double> >h(102);
        for(int i=0; i<n; i++)
        {
            sf("%lf %lf",&x,&y);
            we.pb(mp(x,y));
        }
        sort(we);
        int k=0;
        for(int i=0; i<n; i++)
        {
            while(k>=2 && orient(h[k-2],h[k-1],we[i])<=0) k--;
            h[k++]=we[i];
        }
        int taken=k+1;
        for(int i=n-2; i>=0; i--)
        {
            while(k>=taken && orient(h[k-2],h[k-1],we[i])<=0) k--;
            h[k++]=we[i];
        }
        h.resize(k-1);
        k--;
        double aa=0,bb=0;
        for(int i=0; i<k; i++)
        {
            aa+=((h[i].ff)*(h[(i+1)%k].ss));
            aa-=((h[i].ss)*(h[(i+1)%k].ff));
        }
        if(aa<0) aa*=-1;
        carea[ii]=aa;
        h1[ii++]=h;
    }
    double dis=0;
    while(sf("%lf %lf",&a,&b)!=EOF)
    {
        for(int k=0; k<ii; k++)
        {
            if(vis[k]==0)
            {
                if(check(a,b,k))
                {
                    dis+=carea[k];
                    vis[k]=1;
                    break;
                }
            }
        }
    }
    dis/=2;
    pf("%.2f\n",dis);
    return 0;
}

