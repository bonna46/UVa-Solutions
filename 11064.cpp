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
#define M             18446744073709551616
#define MINI          100000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};

bool prime[47002];
vector<lli>ar;
void sie(lli p)
{
    for(int i=3; i*i<=p; i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=p; j+=(i*2))
                prime[j]=true;
        }
    }
    ar.pb(2);
    for(int i=3; i<=p; i+=2)
    {
        if(prime[i]==false)
            ar.pb(i);
    }
    return;
}

lli divi(lli n)
{ lli sum=1;
    for(int i=0;i<ar.size() && ar[i]*ar[i]<=n;i++)
    { int c=0;
       while(n%ar[i]==0)
       {
           c++;
           n/=ar[i];
       }
       sum*=(c+1);
    }
    if(n>1)
        sum*=2;
    return sum;
}

lli coprime(lli n)
{ lli sum=n;
    for(int i=0;i<ar.size() && ar[i]*ar[i]<=n;i++)
    { int c=0;
       while(n%ar[i]==0)
       {
           c++;
           n/=ar[i];
       }
       if(c>0)
       {
           sum/=ar[i];
           sum*=(ar[i]-1);
       }
    }
    if(n>1)
    {
        sum/=n;
           sum*=(n-1);
    }
    return sum;
}

int main()
{
    sie(47000);
    lli n,a,b,x,cnt=0;
   while(cin>>x)
   {
       lli a=coprime(x);
       a+=divi(x);
       x=x-a+1;
       cout<<x<<endl;
   }

    return 0;
}
