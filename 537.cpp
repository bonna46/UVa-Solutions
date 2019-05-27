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
#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};

int main()
{
    int t;
    cin>>t;
    string s,x;
    getline(cin,s);
    for(t1,1,t+1)
    {
        double U=0,I=0,P=0;
        getline(cin,s);
        istringstream f(s);
        while(f>>x)
        {
            if(x.size()>2 && x[1]=='=')
            {
                double n=0,f=0;
                double d=1;
                for(i,2,x.size()-1)
                {
                    if(f==0 && x[i]>='0' && x[i]<='9')
                    {
                        double pp=x[i]-'0';
                        n=(n*10)+pp;
                    }
                    else if(x[i]=='.')
                    f=1;
                    else if(f==1 && x[i]>='0' && x[i]<='9')
                    {
                        d*=10;
                        double pp=x[i]-'0';
                        n=(n*10)+pp;

                    }
                    else if(x[i]=='m')
                        n=n/1000;
                    else if(x[i]=='k')
                        n=n*1000;
                    else if (x[i]=='M')
                        n=n*1000000;
                }
                 n=n/d;
                if(x[0]=='P')
                    P=n;
                else if(x[0]=='U')
                    U=n;
                else if(x[0]=='I')
                    I=n;
            }

        }
        double ans;
        if(P==0)
        {
            ans=U*I;
            printf("Problem #%d\nP=%.2fW\n\n",t1,ans);
        }
        else if(U==0)
        {
            ans=P/I;
            printf("Problem #%d\nU=%.2fV\n\n",t1,ans);
        }
        else if(I==0)
        {
            ans=P/U;
            printf("Problem #%d\nI=%.2fA\n\n",t1,ans);
        }
    }
    return 0;
}
