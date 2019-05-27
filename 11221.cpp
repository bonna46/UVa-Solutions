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
char ar[103][103];

int main()
{
    int t;
    cin>>t;
    string m;
    getline(cin,m);
    //cout<<"ku";
    for(int t1=1; t1<=t; t1++)
    {
        string p,s;
        bool flag=true;
        getline(cin,p);
        //cout<<"tku";
        for(int i=0; i<p.size(); i++)
        {
            if(p[i]>='a' && p[i]<='z')
                s+=p[i];
        }
        int n=sqrt(s.size());
        if(n*n!=s.size())
            flag=false;
        else
        {
            int cnt=0;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    ar[i][j]=s[cnt++];
                }
            }
            string ss,x,xx;
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    ss+=ar[j][i];
                }
            }
            if(ss!=s)
                flag=false;

            for(int i=n-1; i>=0; i--)
            {
                for(int j=n-1; j>=0; j--)
                    x+=ar[i][j];
            }
            if(x!=s)
                flag=false;

            for(int i=n-1; i>=0; i--)
            {
                for(int j=n-1; j>=0; j--)
                    xx+=ar[j][i];
            }
            if(xx!=s)
                flag=false;
        }
        if(s.size()==0)
            flag=false;
        printf("Case #%d:\n",t1);
        if(flag==false)
            printf("No magic :(\n");
        else
            printf("%d\n",n);
    }
    return 0;
}
