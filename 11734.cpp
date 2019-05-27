#include<bits/stdc++.h>
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
#define ll                      int long long
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
    int t;
    cin>>t;
    string ss;
    getline(cin,ss);
    for(int t1=1; t1<=t; t1++)
    {
        string a,b,s,c="";
        getline(cin,s);
        getline(cin,a);
        istringstream f(s);
        int pp=0;
        while(f>>b)
        {
            c+=b;
        }
        if(s==a)
            printf("Case %d: Yes\n",t1);
        else if(c==a)
            printf("Case %d: Output Format Error\n",t1);
        else
            printf("Case %d: Wrong Answer\n",t1);
    }
    return 0;
}
