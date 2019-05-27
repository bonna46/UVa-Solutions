#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pb     push_back
#define mp     make_pair
#define pi     acos(-1)
#define lli    int long long
#define pb     push_back
#define M      1000000007
#define ff     first
#define ss     second
lli n,ar[103],base;
pair<int,string> dp[102][64005];
int vis[102][64005];
string assi(lli p)
{
    string g="";
    int arr[8],i=0;
    while(p/10!=0)
    {
        arr[i]=p%10;
        p=p/10;
        i++;
    }
    arr[i]=p;
    for(int j=i; j>=0; j--)
    {
        char c=arr[j]+48;
        g+=c;
    }
    return g;
}
pair<int,string> func(int pos,lli val)
{
    if(val<0 || val>64000)
        return mp(0,"");
    val=val-32000;
    if(pos==n)
    {
        if(val==base)
            return mp(1,"");
        else
            return mp(0,"");
    }
    if(vis[pos][val]!=-1)
        return dp[pos][val];
    vis[pos][val]=1;
    lli br[4];
    br[0]=val+ar[pos];
    br[1]=val-ar[pos];
    br[2]=val*ar[pos];
    if(val%ar[pos]==0)
        br[3]=val/ar[pos];
    else
        br[3]=64003;
    int f=0;
    pair<int,string>x=mp(0,"");
    for(int i=0; i<4; i++)
    {
        if(br[i]<=32000 && br[i]>=-32000)
        {
            pair<int,string>we=func(pos+1,br[i]+32000);
            if(we.ff==1)
            {
                x=we;
                f=i+1;
                break;
            }
        }
    }
    string s="",z=assi(ar[pos]);
    if(pos!=0)
    {
        if(f==1)
        {
            s+='+';
        }
        else if(f==2)
        {
            s+='-';
        }
        else if(f==3)
        {
            s+='*';
        }
        else if(f==4)
        {
            s+='/';
        }
    }

    s+=z;
    s+=x.ss;
    return dp[pos][val]=mp(x.ff,s);
}
int main()
{
    int t;
    cin>>t;
    for(int pp=1; pp<=t; pp++)
    {
        scanf("%lld",&n);
        for(int i=0; i<n; i++)
            scanf("%lld",&ar[i]);
        scanf("%lld",&base);
        memset(vis,-1,sizeof vis);
        pair<int,string>v=func(0,32000);
        if(v.ff==0)
          printf("NO EXPRESSION\n",pp);
        else
        cout<<v.ss<<"="<<base<<endl;
    }

    return 0;
}
