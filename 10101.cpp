#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>
#include<string>
#include<cstring>   //for memset
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<list>
#include<iterator>
#include <iomanip>
#include<numeric>
//#include<unordered_map>
//#include<unordered_set>


using namespace std;

#define llu                    unsigned long long
#define lli                     int long long
#define ld                      long double    //printf("%.9Lf")
#define pb                      push_back
#define mp                      make_pair
#define pi                      acos(-1)
#define dif(ax,ay,bx,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define READ                    freopen("in.txt","r",stdin);
#define WRITE                   freopen("outer.txt","w",stdout);
#define sort(v)                 sort(v.begin(),v.end())
#define REP(i,n)                for(i=0; i<n; i++)
#define REV(i,n)                for(i=n; i>=0; i--)
#define FOR(i,p,k)              for(i=p; i<k; i++)
#define SZ(a)                   (int)a.size()
#define M                      10000000
#define ff                       first
#define ss                       second
//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};

int main()
{
    lli n;
    int t1=0;
   while(cin>>n)
   {
       t1++;
       int f=0;
       lli nn=n;
       if(t1<10)
      printf("   %d.",t1);
      else if(t1<100)
      printf("  %d.",t1);
      else if(t1<1000)
      printf(" %d.",t1);
      else if(t1<10000)
      printf("%d.",t1);
      int p;
      p=n/100000000000000;
      n=n%100000000000000;
      if(p!=0)
      { f++;
          printf(" %d",p);
          cout<<" kuti";
      }
      p=n/1000000000000;
      n=n%1000000000000;
      if(p!=0)
      {f++;
          printf(" %d",p);
          cout<<" lakh";
      }
      p=n/10000000000;
      n=n%10000000000;
       if(p!=0)
      {f++;
          printf(" %d",p);
          cout<<" hajar";
      }
      p=n/1000000000;
      n=n%1000000000;
       if(p!=0)
      {f++;
          printf(" %d",p);
          cout<<" shata";
      }
      p=n/10000000;
      n=n%10000000;
       if(p!=0)
      {f++;
          printf(" %d",p);
      }
      if(f!=0)
        cout<<" kuti";
      p=n/100000;
      n=n%100000;
      if(p!=0)
      {
         printf(" %d",p);
          cout<<" lakh";
      }
      p=n/1000;
      n=n%1000;
       if(p!=0)
      {
          printf(" %d",p);
          cout<<" hajar";
      }
      p=n/100;
      n=n%100;
       if(p!=0)
      {
          printf(" %d",p);
          cout<<" shata";
      }
       if(n!=0)
      printf(" %d",n);
      else if(nn==0)
        printf(" 0");
       printf("\n");
   }
    return 0;
}
