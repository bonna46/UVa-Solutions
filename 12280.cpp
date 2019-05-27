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
//string print--> printf("%s",stringname.c_str());

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
//#define ss                       second
//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};
char ar[10][20];
char ss[10][23];
int f1=0,f2=0,f=0,p1,p2;
void pos_change(int p,int q,int d)
{
    int pp=p,qq=q;
    for(int i=1; i<=7; i++)
    {
        for(int j=q-3; j<=q+4; j++)
        {
            ss[i][j]='.';
        }
        ss[i][q+5]='|';
        ss[i][q+6]='|';
    }
    int st,ed;
    if(d==1)//mid
    {
        st=2;
        ed=6;
    }
    if(d==2)//up
    {
        st=1;
        ed=5;
    }
    if(d==3)//down
    {
        st=3;
        ed=7;
    }
    for(int i=st; i<=ed; i++)
    {
        for(int j=q-3; j<=q+4; j++)
        {
            ss[i][j]=ar[pp][j];
        }
        pp++;
    }
    return;
}

lli weight(string s)
{
    int ss=s.size();
    lli msum=0;
    for(int i=0; i<ss; i++)
    {
        int n=s[i];
        lli sum=0;
        while(n!=0)
        {
            if(n%2==0)
                sum+=250;
            else
                sum+=500;
            n=n/2;
        }
        msum+=sum;
    }
    return msum;
}

int main()
{
    int t;
    cin>>t;
    for(int t1=1; t1<=t; t1++)
    {
        f1=0;
        f2=0;
        f=0;
        string s1,s2;
        for(int i=1; i<=8; i++)
        {
            for(int j=0; j<=18; j++)
            {
                scanf("%c",&ar[i][j]);
                if(j-1==4 && ar[i][j-1]=='/' && ar[i][j]==92)
                {
                    p1=i;
                }
                else if(j-1==14 && ar[i][j-1]=='/' && ar[i][j]==92)
                {
                    p2=i;
                }
                else if(j<9 && ar[i][j]>='A' && ar[i][j]<='Z' )
                {
                    // cout<<1<<" "<<i<<" "<<j<<ar[i][j]<<endl;
                    s1+=ar[i][j];
                }
                else if(j>9 && ar[i][j]>='A' && ar[i][j]<='Z' )
                {
                    // cout<<2<<" "<<i<<" "<<j<<ar[i][j]<<endl;
                    s2+=ar[i][j];
                }
            }
        }
        // cout<<s1<<weight(s1)<<" "<<s2<<weight(s2)<<endl;
        if(p1<p2 && weight(s1)<weight(s2))
            f=0;
        else  if(p1>p2 && weight(s1)>weight(s2))
            f=0;
        else if(p1==p2 && weight(s1)==weight(s2))
            f=0;
        else
        {
            f=1;
            if(weight(s1)<weight(s2))
            {
                pos_change(p2,14,3);
                pos_change(p1,4,2);
            }
            else  if(weight(s1)>weight(s2))
            {
                pos_change(p1,4,3);
                pos_change(p2,14,2);
            }
            else
            {
                pos_change(p1,4,1);
                pos_change(p2,14,1);
            }
        }
        //cout<<weight(s1)<<" "<<weight(s2)<<" "<<f<<endl;
        printf("Case %d:\n",t1);
        if(f==0)
        {
            printf("The figure is correct.\n");
        }
        else
        {
            for(int i=1; i<=7; i++)
            {
                for(int j=1; j<=18; j++)
                {
                    printf("%c",ss[i][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
