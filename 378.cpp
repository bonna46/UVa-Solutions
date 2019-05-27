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



#define ll            long long
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
#define M             1000000007
#define MINI         -1000000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
#define reverse(t)    reverse(t.begin(),t.end())
#define ff            first
#define ss            second
#define otivuj(dx,dy) sqrt(dx*dx+dy*dy)
#define dis(ax,bx,ay,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define sf                 scanf
#define pf                  printf
#define sff(a,b)            scanf("%d%d",&a,&b)
#define sfl(a)              scanf("%64I",&a)
#define sfll(a,b)             scanf("%64I%64I",&a,&b)
#define MX 10000007


int main()
{
    int t;
    cin>>t;
    int x1,x2,x3,x4,y1,y2,y3,y4;
    pf("INTERSECTING LINES OUTPUT\n");
    while(t--)
    {
        sf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        int a,b,c,d,p1,p2,det,x,y;
        a=(y1-y2);
        b=(x1-x2);
        c=(y3-y4);
        d=(x3-x4);
        p1=(a*x1)-(b*y1);
        p2=(c*x3)-(d*y3);
        if(a*d==b*c)
        {
            if(d*p1==b*p2 && c*p1==a*p2)
                pf("LINE\n");
            else
                pf("NONE\n");
        }
        else
        {
            det=(b*c)-(a*d);
            // cout<<p1<<" "<<p2<<endl;
            x=(p2*b)-(p1*d);
            y=(p2*a)-(p1*c);
            //cout<<det<<" "<<x<<" "<<y<<endl;
            pf("POINT %.2f %.2f\n",(double)x/det,(double)y/det);
        }
    }
    pf("END OF OUTPUT\n");
}

