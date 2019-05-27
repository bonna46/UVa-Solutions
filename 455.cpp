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



#define lli            int long long
#define ull           unsigned long long
#define ld            long double    //printf("%.9Lf")
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define dis(ax,bx,ay,by)        (ax-bx)*(ax-bx)+(ay-by)*(ay-by)
#define EPS                     1e-9
#define inf            10000000000000000+7
#define M             1003
#define MINI         -1000000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
#define ff                       first
#define ss                       second
#define sf                       scanf
#define pf                       printf
#define otivuj(dx,dy)            sqrt(dx*dx+dy*dy)

//#define for(i,a,b)               for(int i=a;i<b;i++)
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};
int failure[M],ans;
map<int,int>we;
map<int,int>::iterator it;
void build_failure_func(string pattern,int m)
{
    failure[0]=0;
    failure[1]=0;
    for(int i=2; i<=m+1; i++)
    {
        int j=failure[i-1];
        while(true)
        {
            if(pattern[j]==pattern[i-1])
            {
                failure[i]=j+1;
                break;
            }
            if(j==0)
            {
                failure[i]=0;
                break;
            }
            j=failure[j];
        }
    }
    int j=m;
        we.clear();
        ans=-1;
        while(j!=0)
        {
                  we[j]=1;
            j=failure[j];
        }
        for(it=we.begin(); it!=we.end(); it++)
        {
            int b=it->first;
            int bb=0,f=0;
            while(bb!=m)
            {
                bb+=b;
                if(we[bb]!=1)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                ans=b;
                break;
            }
        }
}
bool kmp(string text,string pattern)
{
    int n=text.size();
    int m=pattern.size();
    int i=0;
    int j=0;
    while(true)
    {
        if(j==n)
            return false;
        if(text[j]==pattern[i])
        {
            i++;
            j++;
            if(i==m)
            {
                j=j-m+1;
                i=0;
            }
        }
        else
        {
            if(i==0)
                j++;
            else
                i=failure[i];
        }
    }
}
int main()
{
    string a,b;
    int p;
    cin>>p;
    while(p--)
    {
        cin>>a;
        int m=a.size();
        build_failure_func(a,m);
        if(ans==-1)
            pf("%d\n",m);
        else
            pf("%d\n",ans);
            if(p!=0)
                    pf("\n");
    }

}
