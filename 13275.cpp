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
int ar[3005];
int leap(int n)
{

    if (n % 400 == 0) return 1;
 else if(n % 100 == 0) return 5;
 else if(n % 4 == 0) return 1;
 else return 5;


}
void sie()
{
    ar[1849]=0;
    for(int i=1850;i<=3000;i++)
    {
        if(leap(i)==1)
            ar[i]=1;
        else
        ar[i]=0;
        ar[i]+=ar[i-1];
    }
    return;
}
int main()
{
   sie();
    int t;
    cin>>t;
   for(int t1=1;t1<=t;t1++)
    {
   int d,m,y1,y2;
   int ans=0;
   cin>>d>>m>>y1>>y2;
   if(m==2 && d==29)
   {
    ans=ar[y2]-ar[y1];
   }
  else
    ans=y2-y1;

    printf("Case %d: %d\n",t1,ans);
    }

}
