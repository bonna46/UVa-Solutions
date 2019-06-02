#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>
using namespace std;

#define ll            int long long
#define ull           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)     (a/gcd(a,b))*b
#define inf            10000000000000000+7
#define M             1000000002
#define MINI         -1000000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//div div[100][100];
//int br[100][100];
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};

int main()
{
  int t,a,b;
  cin>>t;
  while(t--)
  {
      cin>>a>>b;
      if(gcd(a,b)==a && lcm(a,b)==b)
        cout<<a<<" "<<b<<endl;
      else
        cout<<"-1"<<endl;
  }
    return 0;

}
