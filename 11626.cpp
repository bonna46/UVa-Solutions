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
vector<pair<double,double> >we;
pair<double,double>h[MX];
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
    int t,n;
    char c;
    cin>>t;
    while(t--)
    {
        sf("%d",&n);
        int cnt=0;
        double x,y;
        we.clear();
        for(int i=0; i<n; i++)
        {
            sf("%lf %lf %c",&x,&y,&c);
            if(c=='N') continue;
            we.pb(mp(x,y));
            cnt++;
        }
       // cout<<"ok"<<endl;
        sort(we);
        int k=0;
        for(int i=0; i<cnt; i++)
        {
            while(k>=2 && orient(h[k-2],h[k-1],we[i])<0) k--;
            h[k++]=we[i];
        }
        int taken=k+1;
        for(int i=cnt-2; i>=0; i--)
        {
            while(k>=taken && orient(h[k-2],h[k-1],we[i])<0) k--;
            h[k++]=we[i];
        }
        k--;
        pf("%d\n",k);
        for(int i=0; i<k; i++)
        {
             lli a=h[i].ff,b=h[i].ss;
            pf("%lld %lld\n",a,b);
        }

    }
    return 0;
}

