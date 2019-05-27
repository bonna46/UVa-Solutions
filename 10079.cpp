#include<iostream>
#include<math.h>
#include <cstdio>
#include <string>
#include <cstring>   //for memset
#include <algorithm>
//#include<set>
#include<vector>
//#include<queue>
//#include<utility>
using namespace std;

#define llu                     unsigned long long
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
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};

int main()
{
   lli n,t;
   while(cin>>n)
   {
       if(n<0)
        break;
       n=(n*(n+1))/2;
       cout<<n+1<<endl;
   }

    return 0;
}
