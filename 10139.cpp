#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>

using namespace std;

#define lli            int long long
#define ull           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define inf            10000000000000000+7
#define M             4294967296
#define MINI          100000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};
bool prime[100003];
vector<int>ar;
void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=n;j+=(2*i))
                prime[j]=true;
        }
    }
    ar.pb(2);
    for(int i=3;i<=n;i+=2)
    {
        if(prime[i]==false)
            ar.pb(i);
    }
    return;
}

int main()
{
    sieve(100000);
    lli a,b;
  while(cin>>b>>a)
  {
      lli aa=a,bb=b;
      vector<pair<lli,int> >v;
      for(int i=0;i<ar.size() && ar[i]*ar[i]<=a;i++)
      {
          int c=0;
          while(a%ar[i]==0)
          {
              c++;
              a=a/ar[i];
          }
          if(c>0)
          {
              v.pb(mp(ar[i],c));
          }
      }
      if(a>1)
        v.pb(mp(a,1));
        int cnt=0;
      for(int i=0;i<v.size();i++)
      {
          lli x=b;
          int f=0;
          lli p=v[i].first;
          lli pp=p;
          while(p<=x)
          {
              f+=(x/p);
              p=p*pp;
          }
          if(f>=v[i].second)
            cnt++;
      }
     if(aa==0 )
        printf("%lld does not divide %lld!\n",aa,bb);
     else if(bb==0 && aa==1)
        printf("%lld divides %lld!\n",aa,bb);
    else if(cnt==v.size())
        printf("%lld divides %lld!\n",aa,bb);
      else
        printf("%lld does not divide %lld!\n",aa,bb);
  }
    return 0;
}
