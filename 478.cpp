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
#define dist(ax,bx,ay,by)        ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define sf                        scanf
#define pf                        printf
#define Q                      12
double xx1[Q],xx2[Q],xx3[Q],yy1[Q],yy2[Q],yy3[Q],x,y;

int match(double x1,double y1,double x2,double y2,double x,double y)
{
    double a,b=x2-x1;
    a=y1-y2;
    if((a*x)+(b*y)==(b*y1)+(a*x1))
        return 1;
    else return 0;
}
double carea(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double aa=(x1*y2)+(x2*y3)+(x3*y1)-(y1*x2)-(y2*x3)-(y3*x1);
    if(aa<0.0)
        aa*=-1;
    return aa;
}


int main()
{
    char cc[12];
    int i=0;
    while(1)
    {
        i++;
        char c;
        sf("%c",&c);
        cc[i]=c;
        if(c=='*') {sf("%c",&c); break; }
        if(c=='r')
        {
            sf("%lf %lf %lf %lf",&xx1[i],&yy1[i],&xx2[i],&yy2[i]);
        }
        else if(c=='c')
        {
            sf("%lf %lf %lf",&xx1[i],&yy1[i],&xx2[i]);
        }
        else if(c=='t')
        {
            sf("%lf %lf %lf %lf %lf %lf",&xx1[i],&yy1[i],&xx2[i],&yy2[i],&xx3[i],&yy3[i]);
        }
        sf("%c",&c);
    }
    int n=i;
    i=0;
    double x1,x2,y1,y2,r;
    while(1)
    {
        i++;
        double x,y;
        int cnt=0;
        sf("%lf %lf",&x,&y);
        if(x-9999.9==0 && y-9999.9==0) break;
        for(int j=1; j<n; j++)
        {
            int f=0;
            if(cc[j]=='r')
            {
                x1=xx1[j];
                x2=xx2[j];
                y1=yy1[j];
                y2=yy2[j];
                if(x1<x && x<x2 && y2<y && y<y1)
                {
                    //cout<<x1<<" "<<x<<" "<<x2<<" "<<y2<<" "<<y<<" "<<j<<endl;
                    f=1;
                }

            }
            else if(cc[j]=='c')
            {
                if(dist(xx1[j],x,yy1[j],y)<(xx2[j]*xx2[j]))
                {
                    f=2;
                }
            }
            else if(cc[j]=='t')
            {
                int p=0;
                p+=(match(xx1[j],yy1[j],xx2[j],yy2[j],x,y) + match(xx3[j],yy3[j],xx2[j],yy2[j],x,y)
                + match(xx1[j],yy1[j],xx3[j],yy3[j],x,y));
                if(p==0)
                {
                   /*
                    cout<<carea(xx1[j],yy1[j],xx2[j],yy2[j],x,y) <<" "<<carea(xx3[j],yy3[j],xx2[j],yy2[j],x,y)
                <<" "<<carea(xx1[j],yy1[j],xx3[j],yy3[j],x,y)<<" "<<carea(xx1[j],yy1[j],xx3[j],yy3[j],xx2[j],yy2[j])<<endl;
                cout<<xx1[j]<<" "<<xx2[j]<<" "<<x<<" "<<yy1[j]<<" "<<yy2[j]<<" "<<y<<endl;
                */
                    double area1,area=(carea(xx1[j],yy1[j],xx2[j],yy2[j],x,y)+carea(xx3[j],yy3[j],xx2[j],yy2[j],x,y)
                                       +carea(xx1[j],yy1[j],xx3[j],yy3[j],x,y));
                    area1=carea(xx1[j],yy1[j],xx2[j],yy2[j],xx3[j],yy3[j]);
                    if(area-area1<=0.05)
                    {
                        f=3;
                    }
                }
            }
            if(f!=0)
            {
                cnt++;
                //cout<<j<<" "<<f<<" "<<cc[j]<<endl;
                pf("Point %d is contained in figure %d\n",i,j);
            }
        }
        if(cnt==0)
            pf("Point %d is not contained in any figure\n",i);

    }
    return 0;
}

