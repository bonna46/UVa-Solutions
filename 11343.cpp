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
#define dist(ax,bx,ay,by)        sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define sf                        scanf
#define pf                        printf
#define MX                      10000007


int main()
{


    int t,n;
    double xx1[102],xx2[102],yy1[102],yy2[102],dis[102];
    cin>>t;
    while(t--)
    {
        sf("%d",&n);
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            sf("%lf %lf %lf %lf",&xx1[i],&yy1[i],&xx2[i],&yy2[i]);
            dis[i]=dist(xx1[i],xx2[i],yy1[i],yy2[i]);
        }
        double x1,x2,x3,x4,y1,y2,y3,y4;
        double a,b,c,d,p1,p2,det,x,y;
        for(int i=0; i<n; i++)
        {
            int f=0;
            x1=xx1[i];
            y1=yy1[i];
            x2=xx2[i];
            y2=yy2[i];
            for(int j=0; j<n ; j++)
            {
                x3=xx1[j];
                y3=yy1[j];
                x4=xx2[j];
                y4=yy2[j];
                a=y1-y2;
                b=x1-x2;
                c=y3-y4;
                d=x3-x4;
                p1=a*x1-b*y1;
                p2=c*x3-d*y3;
                if(a*d==b*c && d*p1==b*p2 && c*p1==a*p2)
                {
                    if(dist(x1,x3,y1,y3)+dist(x1,x4,y1,y4)-dis[j]<=0.005 || dist(x2,x3,y2,y3)+dist(x2,x4,y2,y4)-dis[j]<=0.05 ||
                            dist(x3,x1,y3,y1)+dist(x3,x2,y3,y2)-dis[i]<=0.05 || dist(x4,x1,y4,y1)+dist(x4,x2,y4,y2)-dis[i]<=0.05 )
                    {
                        f++; //cout<<"ok"<<endl;
                    }
                }
                else
                {
                    det=b*c-a*d;
                    x=(p2*b-p1*d)/det;
                    y=(p2*a-p1*c)/det;
                     //cout<<" "<<(dist(x,x3,y,y3)+dist(x,x4,y,y4))<<" "<<dis[j]<<" "<<dist(x1,x,y1,y)+dist(x2,x,y2,y)<<" "<<dis[i]<<endl;
                    if((dist(x1,x,y1,y)+dist(x2,x,y2,y)-dis[i])<=0.005 && (dist(x,x3,y,y3)+dist(x,x4,y,y4)-dis[j])<=0.005 )
                    {
                        f++;// cout<<"okk"<<endl;
                    }
                }
                //cout<<i<<" "<<j<<" "<<f<<endl;
            }
            if(f==1)
                cnt++;
            //cout<<" "<<f<<endl;
        }
        pf("%d\n",cnt);

    }
    return 0;
}

