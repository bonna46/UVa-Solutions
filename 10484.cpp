#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>

using namespace std;

#define lli            int long long
#define klli           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define inf            10000000000000000+7
#define M             18446744073709551615
#define MINI          100000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};
bool prime[1000];
vector<int>ar;
void sie(int p)
{
    for(int i=3; i*i<=p; i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=p; j+=(2*i))
                prime[j]=true;
        }
    }
    ar.pb(2);
    {
        for(int i=3; i<=p; i+=2)
        {
            if(prime[i]==false)
                ar.pb(i);
        }
    }
    return;
}
lli func(lli n,lli d)
{
    int br[102];
    for(int i=0; i<=100; i++)
        br[i]=0;
    for(int j=2; j<=n; j++)
    {
        lli p=j;
        for(int i=0; i<ar.size() && ar[i]*ar[i]<=p; i++)
        {
            int c=0;
            while(p%ar[i]==0)
            {
                c++;
                p/=ar[i];
            }
            br[ar[i]]+=c;
        }
        if(p>1)
            br[p]+=1;
    }
    for(int i=2; i<100; i++)
        br[i]+=1;
    int f=0;
    for(int i=0; i<ar.size(); i++)
    {
        int c=0;
        while(d%ar[i]==0)
        {
            c++;
            d/=ar[i];
        }
        if(c<=br[ar[i]])
        {
            br[ar[i]]-=c;
        }

        else
            f=1;

    }
    lli ans=1;
    if(d>1)
        ans=0;
    else
    {
        for(int i=2; i<100; i++)
        {
            ans=ans*br[i];
        }
        if(f==1)
            ans=0;
    }
    return ans;

}


int main()
{
    sie(100);
    lli a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0) break;
        lli p=func(a,b);
        cout<<p<<endl;
    }
    return 0;
}
