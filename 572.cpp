#include<iostream>
#include<math.h>
#include<cstdio>
#include<string>
#include<cstring>   //for memset
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
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

int a[8]= {0,0,-1,1,-1,1,-1,1};
int b[8]= {-1,1,0,0,-1,1,1,-1};

int vis[105][105],m,n;
string s[103];

void func(int ii,int jj)
{
    vis[ii][jj]=1;
    for(int k=0; k<8; k++)
    {
        int i=ii+a[k];
        int j=jj+b[k];
        if(i>=0 && i<m && j>=0 && j<n )
        {
            if(s[i][j]=='@' && vis[i][j]==0)
            {
             //   cout<<i<<"   "<<j<<endl;
                func(i,j);
            }

        }
    }
    return;
}
int main()
{
    int t;
    while(cin>>m>>n)
    {
        if(m==0)
            break;
        for(int i=0; i<105; i++)
        {
            for(int j=0; j<105; j++)
            {
                vis[i][j]=0;
            }
        }
        int c=0;
        for(int i=0; i<m; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='@' && vis[i][j]==0)
                {
                    c++;
                    func(i,j);
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
