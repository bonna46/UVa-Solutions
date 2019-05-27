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
string vis[11][26];
string multiply(string a,string b)
{
    vector<int>x;
    int pp=b[0]-48,pre=0;
    for(int i=a.size()-1; i>=0; i--)
    {
        int s=a[i]-48;
        s=(s*pp)+pre;
        pre=s/10;
        s=s%10;
        x.pb(s);
    }
    if(pre!=0)
        x.pb(pre);
    string ss="";
    for(int i=x.size()-1; i>=0; i--)
    {
        pre=x[i]+48;
        ss+=pre;
    }
    return ss;
}

void func()
{
    for(int i=1; i<11; i++)
        vis[i][0]="1";
    for(int i=1; i<10; i++)
    {
        char d=i+48;
        vis[i][1]+=d;
    }
    vis[10][1]="10";
    for(int i=1; i<10; i++)
    {
        string c=vis[i][1];
        for(int j=2; j<26; j++)
        {
            vis[i][j]=multiply(vis[i][j-1],c);
        }
    }
    string s=vis[10][1];
    for(int j=2; j<26; j++)
    {
        s+='0';
        vis[10][j]=s;
    }
    return;
}


int main()
{

    func();
    int k,t;
    while(cin>>k>>t)
    {
        if(k==0 && t==0)
            break;
        cout<<vis[k][t]<<endl;
    }
    return 0;
}
