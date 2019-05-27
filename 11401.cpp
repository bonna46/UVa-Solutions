#include<bits/stdc++.h>
#include<math.h>
#include<cstdio>
#include<string>
#include<cstring>   //for memset
#include<algorithm>
#include<set>
#include<vector>
//#include<queue>
//#include<utility>
using namespace std;

#define llu                    unsigned long long
#define lli                     int long long
#define pb                      push_back
#define mp                      make_pair
#define dif(ax,ay,bx,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define READ                    freopen("in.txt","r",stdin);
#define WRITE                   freopen("outer.txt","w",stdout);
#define sort(v)                 sort(v.begin(),v.end())
#define REP(i,n)                for(i=0; i<n; i++)
#define REV(i,n)                for(i=n; i>=0; i--)
#define FOR(i,p,k)              for(i=p; i<k; i++)
#define SZ(a)                   (int)a.size()
#define M                      10000000000000000
#define ff                       first
#define ss                       second
//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};
lli vis[1000002];
lli ar[1000002];

int main()
{
    ar[1]=1;
    for(int i=2; i<1000001; i++)
    {
        ar[i]=ar[i-1]+i;
    }
    vis[1]=1;
    vis[2]=3;
    for(int i=2; i<1000001; i++)
    {
        vis[i]=vis[i-2]+ar[i];
    }
    lli x,y;
    while(cin>>x)
    {
        if(x<3)
            break;
        y=x;
        x=x*(x-1)*(x-2);
        x=x/6;
        x-=vis[y-2];
        cout<<x<<endl;
    }

    return 0;
}
