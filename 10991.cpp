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
        double a,b,c,r1,r2,r3,t1,t2,t3;
       sf("%lf %lf %lf",&r1,&r2,&r3);
       a=r3+r2;
       b=r3+r1;
       c=r1+r2;
       t1=acos((double)(a*a+b*b-c*c)/(2*a*b));
       double d=t1;
        t2=acos((double)(c*c+b*b-a*a)/(2*c*b));
        t3=acos((double)(a*a-b*b+c*c)/(2*a*c));
      t1=(double)(t1*r3*r3)/2;
      t2=(double)(t2*r1*r1)/2;
      t3=(double)(t3*r2*r2)/2;
      double area=(0.5*a*b*sin(d));
      area-=(t1+t2+t3);
        pf("%.6f\n",area);

    }
   return 0;
}

