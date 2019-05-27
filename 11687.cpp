#include<cstdio>
#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>
#include<string>
#include<cstring>   //for memset
#include<algorithm>
#include<vector>
#include<utility>
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
//#include<unordered_map>
//#include<unordered_set>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>
using namespace std;
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
#define M                      10000009
#define ff                       first
//#define ss                       second
//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};

int main()
{
    int t,p,i=0;
    string s,x;
    while(cin>>s)
    {
         if(s=="END") break;
      i=0;
      while(1)
      {

          int sz=s.size();
          stringstream ss;
          ss<<sz;
          x=ss.str();
          if(s==x)
          {
              cout<<i+1<<endl;
              break;
          }
          s=x;
          i++;
      }

    }

    return 0;
}
