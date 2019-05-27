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
double a1[MX],b1[MX];
lli h1[MX];

double find_angle(double x,double y)//find tan from two coordinate
{
    return (atan(y/x)*180)/pi;
}
vector<pair<pair<double,double>, lli > > vv;
vector<pair<double,int> >v;
vector<pair<int,int> >pp;
map<double,int>me;

void check()
{
    vv.pb(mp(mp(0.0,0.0),0));
   // cout<<vv.size()<<endl;
    sort(vv);
    int ans;
    for(int i=0; i<vv.size(); i++)
    {
        if(vv[i].ff.ff==0.0 && vv[i].ff.ss==0.0 && vv[i].ss==0)
        {
            ans=i;
            break;
        }
    }
    int mn=-1;
    if(ans+1<vv.size())
    {
        for(int i=ans+1; i<vv.size(); i++)
        {
            // cout<<vv[i].ss<<endl;
            if(vv[i].ss>mn)
            {
                mn=vv[i].ss;
            }
            else
            {
                pp.pb(mp(vv[i].ff.ff,vv[i].ff.ss));
                //cout<<vv[i].ss<<"  "<<mn<<endl;
            }
        }
    }
    mn=-1;
    if(ans-1>=0)
    {
        for(int i=ans-1; i>=0; i--)
        {
            //cout<<vv[i].ss;
            if(vv[i].ss>mn)
            {
                mn=vv[i].ss;
            }
            else
            {
                pp.pb(mp(vv[i].ff.ff,vv[i].ff.ss));
                //cout<<vv[i].ss<<"  "<<mn<<endl;
            }
        }
    }
    return;
}
int tt=1;
int main()
{

    int n;
    while(sf("%d",&n))
    {
        if(n==0) break;
        v.clear();
        pp.clear();
          me.clear(); vv.clear();
        for(int i=0; i<n; i++)
        {
            double a,b,t;
            lli h;
            sf("%lf %lf %lld",&a,&b,&h);
            a1[i]=a,b1[i]=b,h1[i]=h;
            if(a==0) t=90;
            else
            t=(atan(b/a)*180)/pi;
             //double t=b/a;
            // cout<<t<<endl;
            //if(a>=0 && b<0) t+=360;
            //if(a<0) t+=180;
            v.pb(mp(t,i));
        }
        sort(v);

        for(int i=0; i<n; i++)
        {
            pair<double,int>we=v[i];
            double t=we.ff;
            if(me[t]==0 && i!=0)
            {
                check();
                // cout<<" "<<a1[we.ss]<<" "<<t<<endl;
                vv.clear();
                vv.pb(mp(mp(a1[we.ss],b1[we.ss]),h1[we.ss]));
            }
            else
            {
                vv.pb(mp(mp(a1[we.ss],b1[we.ss]),h1[we.ss]));
            }
            me[t]++;
        }
        //cout<<" "<<a1[v[n-1].ss]<<" "<<v[n-1].ff<<endl;
        check();
        vv.clear();
        sort(pp);
        pf("Data set %d:\n",tt);
        tt++;
        if(pp.size()==0)
        {
            pf("All the lights are visible.\n");
        }
        else
        {
            pf("Some lights are not visible:\n");
        for(int i=0; i<pp.size(); i++)
        {
            lli x2=pp[i].ss,x1=pp[i].ff;
            if(i==pp.size()-1)
                pf("x = %lld, y = %lld.\n",x1,x2);
            else
                pf("x = %lld, y = %lld;\n",x1,x2);
            //cout<<pp[i].ff<<"   "<<pp[i].ss<<endl;
        }
        }

    }
    return 0;
}

