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
     double x1,x2,x3,y1,y2,y3;
    while((sf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3))!=EOF)
    {
       double p1,q1,p2,q2,m1,m2,m3,m4,p3,p4;
       p1=(x1+x2)/2;
       p2=(x2+x3)/2;
        q1=(y1+y2)/2;
        q2=(y2+y3)/2;
        m1=y1-y2;
        m2=x2-x1;
        m3=y2-y3;
        m4=x3-x2;
        p3=(p1*m2)-(m1*q1);
        p4=(p2*m4)-(q2*m3);
        double det=(m1*m4)-(m2*m3);
        double x=((m1*p4)-(p3*m3))/det;
        double y=((m2*p4)-(p3*m4))/det;
        double r=sqrt(dist(x1,x,y1,y));
        double yy,xx=x*2; yy=y*2;
        if(x==0.0)
            pf("x^2");
        else
        {
            if(x<0.0)
               {
                   x=x*-1; pf("(x + %.3f)^2",x);
               }
            else
                pf("(x - %.3f)^2",x);
        }
        if(y==0.0)
            pf(" + y^2");
        else
        {
            if(y<0.0)
               {
                   y=y*-1; pf(" + (y + %.3f)^2",y);
               }
            else
                pf(" + (y - %.3f)^2",y);
        }
        pf(" = %.3f^2\nx^2 + y^2",r);

            if(xx<0.0)
            {
                xx*=-1;
                  pf(" + %.3fx",xx);
            }
            else if(xx>0.0)
                pf(" - %.3fx",xx);

                if(yy<0.0)
            {
                yy*=-1;
                  pf(" + %.3fy",yy);
            }
            else if(yy>0.0)
                pf(" - %.3fy",yy);



        double pp=x*x+y*y-r*r;
         if(pp<0.0)
            {
                pp*=-1;
                  pf(" - %.3f",pp);
            }
            else if(pp>0.0)
                pf(" + %.3f",pp);
                pf(" = 0\n\n");
    }
   return 0;
}

