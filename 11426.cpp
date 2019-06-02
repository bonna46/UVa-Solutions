#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>

using namespace std;

#define tlli            int long long
#define lli           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define inf            10000000000000000+7
//#define M             18446744073709551616
#define MINI          100000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};
lli phi[4000005];
lli res[4000005];
void phigen(int n)
{
    for(int i=1; i<=n; i++)
        phi[i]=i;
    for(int i=2;i<=n; i++)
    {
        if(phi[i]==i)
        {
            for(int j=i; j<=n; j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
            }
        }
    }
    lli x=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j+=i)
            res[j]+=(i*phi[j/i]);
    }
    for(int i=1; i<=n; i++)
    {
        res[i]=res[i]-i+x;
        x=res[i];
    }
    return;
}

int main()
{
    phigen(4000003);
    int t,n;
    lli pp,x;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        printf("%llu\n",res[n]);
    }
    return 0;
}
