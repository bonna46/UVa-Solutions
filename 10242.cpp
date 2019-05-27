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



#define lli            int
#define ull           unsigned long long
#define ld            long double    //printf("%.9Lf")
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define dis(ax,bx,ay,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define EPS                     1e-9
#define inf            10000000000000000+7
#define M             100003
#define MINI         -1000000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
#define reverse(t)       reverse(t.begin(),t.end())
#define ff                       first
#define ss                       second
#define sf                       scanf
#define pf                       printf
#define otivuj(dx,dy)            sqrt(dx*dx+dy*dy)
#define pf                 printf

//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};

int main()
{
    double x1,x2,x3,x4,x5,x6,x7,x8,ax,ay,bx,by,cx,cy;
    while(sf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8)!=EOF)
    {
        if(x1-x5==0.0 && x2-x6==0.0)
        {
            ax=x1;
            ay=x2;
            bx=x3;
            by=x4;
            cx=x7;
            cy=x8;
        }
        else if(x3-x5==0.0 && x4-x6==0.0)
        {
            ax=x3;
            ay=x4;
            bx=x1;
            by=x2;
            cx=x7;
            cy=x8;
        }
        else if(x1-x7==0.0 && x2-x8==0.0)
        {
            ax=x1;
            ay=x2;
            bx=x3;
            by=x4;
            cx=x5;
            cy=x6;
        }
        else if(x3-x7==0.0 && x4-x8==0.0)
        {
            ax=x3;
            ay=x4;
            bx=x1;
            by=x2;
            cx=x5;
            cy=x6;
        }
        double p2, p1=bx+cx-ax;
         p2=cy-ay+by;
        pf("%.3f %.3f\n",p1,p2);
    }
}

