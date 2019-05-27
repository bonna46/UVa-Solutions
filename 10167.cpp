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
#define MX                      1000002

double a1[103],b1[103];

int main()
{
    int n;
    while(sf("%d",&n))
    {
        if(n==0) break;
        int nn=2*n;
        for(int i=0; i<nn; i++)
        {
            double x,y;
            sf("%lf %lf",&a1[i],&b1[i]);
        }
        lli s1=502,s2=0;
        for(lli i=-500; i<=500; i++)
        {
            for(lli j=-500; j<=500; j++)
            {
                double x1,x2,y1,y2,x3,y3,p1,p2,q1,q2;
                x1=j; y1=-i;
                int c1=0,c2=0;
                for(int k=0;k<nn;k++)
                {
                    x2=a1[k]; y2=b1[k];
                    //cout<<kk<<endl;
                    if(x1*y2-x2*y1>0)
                    {
                        c1++;
                    }
                    if(x1*y2-x2*y1<0)
                        c2++;
                }
                if(c1==n && c2==n)
                    {pf("%lld %lld\n",i,j); i=600; j=600; break; }
            }
        }
    }

    return 0;
}

