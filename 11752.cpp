#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>

using namespace std;

#define lli            int
#define ull           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define inf            10000000000000000+7
#define M            18446744073709551615
#define MINI          100000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};
bool prime[107];

void sie(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*2; j<=n; j+=i)
                prime[j]=true;
        }
    }
    return;
}
 set<ull>pp;
set<ull>::iterator it;
int main()
{
    sie(104);
    pp.insert(1);
     for(ull i=2;i<=100000;i++)
     {
         ull y=i;
         ull x=y*y;
         int c=2;
         ull k=M/x;
        // cout<<k<<" "<<x<<endl;
         while(k>=y)
         {
             x=x*y;
             c++;
             if(prime[c]==true) pp.insert(x);
             k=M/x;
             // cout<<k<<" "<<x<<endl;
         }
     }
     for(it=pp.begin();it!=pp.end();it++)
            cout<<*it<<endl;
    return 0;

}
