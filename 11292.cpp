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
#include<queue>
#include<stack>
#include<list>
#include<iterator>
#include <iomanip>
#include<numeric>
//#include<unordered_map>
//#include<unordered_set>


using namespace std;

#define llu                    unsigned long long
#define lli                     int long long
#define ld                      long double    //printf("%.9Lf")
#define pb                      push_back
#define mp                      make_pair
#define pi                      acos(-1)
#define dif(ax,ay,bx,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define READ                    freopen("in.txt","r",stdin);
#define WRITE                   freopen("outer.txt","w",stdout);
#define sort(v)                 sort(v.begin(),v.end())
#define REP(i,n)                for(i=0; i<n; i++)
#define REV(i,n)                for(i=n; i>=0; i--)
#define FOR(i,p,k)              for(i=p; i<k; i++)
#define SZ(a)                   (int)a.size()
#define M                      1000000000000000002
#define ff                       first
#define ss                       second
//#define fr(i,a,b)  for(int i=a;i<b;i++)
//int a[8]= {-2,-2,-1,-1,1,1,2,2};
//int b[8]= {-1,1,-2,2,-2,2,-1,1};

int main()
{
   int x,n;
   while(scanf("%d %d",&n,&x))
   {
       int p;
       if(n+x==0) break;
       vector<int>v,vv;
        for(int i=0;i<n;i++)
       {
           scanf("%d",&p);
           v.pb(p);
       }
       for(int i=0;i<x;i++)
       {
           scanf("%d",&p);
           vv.pb(p);
       }
       sort(v);  sort(vv);
       int mn=min(v.size(),vv.size());
       int j=lower_bound(vv.begin(),vv.end(),v[0])-vv.begin();
       int sum=0,cnt=0;

       for(int i=0;i<mn;i++)
       {
           while(j<vv.size() && vv[j]<v[i])
            j++;
           if(j<vv.size() && vv[j]>=v[i])
           {
               sum+=vv[j];
               j++;
               cnt++;
           }
       }
       if(cnt>=n)
       printf("%d\n",sum);
       else
        printf("Loowater is doomed!\n");
   }
    return 0;
}
