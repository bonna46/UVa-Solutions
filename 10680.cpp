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
bool prime[1000004];
vector<int>ar;
 void sie(int p)
 {
     for(int i=3;i*i<=p;i+=2)
     {
         if(prime[i]==false)
         {
             for(int j=i*i;j<=p;j+=(2*i))
                prime[j]=true;
         }
     }
     ar.pb(2);
     for(int i=3;i<=p;i+=2)
        if(prime[i]==false)
        {
           // cout<<i<<endl;
              ar.pb(i);
        }

      //  cout<<ar.size();
 }

 int func(int n)
 {
     int sum=1,a2=0,a5=0;
     int pp=1,px=n,c=0;
         while(px>=pp)
         {
           c++;
            pp=pp*2;
         }
         a2=c;
         pp=1;px=n;c=0;
         while(px>=pp)
         {
           c++;
            pp=pp*5;
         }
         a5=c;
             int y=a2-a5;
             a5=1;
             while(y--)
                a5=a5*2;
           a5=a5%10;
     for(int i=1;i<ar.size() && ar[i]<=n;i++)
     {
         lli p=ar[i],x=n,c=1;
         int t=1;
         while(x>=p)
         {
            t=(t*ar[i])%10;
            p=p*ar[i];
         }
         if(ar[i]!=5)
         {
            sum=(sum*t)%10;
         }
     }
     //cout<<" "<<a5<<endl;
     sum=(sum*a5)%10;
     return sum;
 }

int main()
{
    sie(1000002);
    int n,m,f=0,t=0;
   while(cin>>n)
   {
       if(n==0) break;
       m=func(n);
       printf("%d\n",m);
   }
    return 0;
}
