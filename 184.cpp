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
#include<deque>
#include<stack>
#include<list>
#include<iterator>
#include <iomanip>
#include<numeric>
//#include<unordered_map>
//#include<unordered_set>


using namespace std;



#define lli            long long int
#define ull           unsigned long long
#define ld            long double    //printf("%.9Lf")
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/__gcd(a,b))*b
#define cs(p)         printf("Case %d:\n",(p))
#define EPS           1e-9
#define inf           INT_MAX
#define M                             1000000007
#define MINI                         -1000000003
#define READ                         freopen("in.txt","r",stdin);
#define WRITE                        freopen("outer.txt","w",stdout);
#define sort(t)                      sort(t.begin(),t.end())
#define reverse(t)                  reverse(t.begin(),t.end())
#define ff                          first
#define ss                          second
#define otivuj(dx,dy)              sqrt(dx*dx+dy*dy)
#define dist(ax,bx,ay,by)        sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define sf                        scanf
#define pf                        printf
#define MM                      100002
#define pdd                     pair<int,int>

vector<int>vs;
vector<pair<int,int> >v;
int n;
pair<int,int> dp[303][303];
void go(int ind,pdd we)
{
    pdd pp=mp(MM,MM);
    if(ind>=n-1) return;
        for(int j=ind+1; j<n; j++)
            if( dp[ind][j]!=pp && (dp[ind][j].ff*we.ss)==(dp[ind][j].ss*we.ff))
            {
               // cout<<dp[ind][j].ff<<" "<<ind<<" "<<j<<" ";
                vs.pb(j);
                go(j,dp[ind][j]);
               // dp[ind][j]=mp(MM,MM);
                j=n+1;
            }
    return;
}
int main()
{

    int cnt=0;
    double x,y;
    while(sf("%lf %lf",&x,&y)==2)
    {
        if(x==0 && y==0)
        {
            if(v.size()==0) break;
            else
            {
                n=v.size();
                // cout<<n<<"okk";
                sort(v);
                for(int i=0; i<n-1; i++)
                {
                    for(int j=i+1; j<n; j++)
                    {
                        dp[i][j]=mp(v[i].ff-v[j].ff,v[i].ss-v[j].ss);
                        //cout<<dp[i][j].ff<<":"<<dp[i][j].ss<<"   ";
                    }
                }

                for(int i=0; i<n-1; i++)
                {
                    for(int k=i+1; k<n; k++)
                    {
                        if(dp[i][k].ff!=MM && dp[i][k].ss!=MM)
                        {
                            vs.clear();
                            vs.pb(i);
                            vs.pb(k);
                            go(k,dp[i][k]);
                           // dp[i][k]=mp(MM,MM);
                            if(vs.size()>=3 )
                            {
                                if(cnt==0)
                                {cnt++;
                                pf("The following lines were found:\n");
                                }
                                for(int i=0; i<vs.size(); i++)
                                    {
                                        if(i!=vs.size()-1)
                                        {
                                               for(int j=i+1;j<vs.size();j++)
                                       dp[vs[i]][vs[j]]=mp(MM,MM);
                                        }
                                        int a=v[vs[i]].ff;
                                        int b=v[vs[i]].ss;
                                        if(a<10)
                                            pf("(   %d,",a);
                                        else if(a<100)
                                            pf("(  %d,",a);
                                        else if(a<1000)
                                            pf("( %d,",a);
                                            else
                                            pf("(%d,",a);

                                            if(b<10)
                                            pf("   %d)",b);
                                        else if(b<100)
                                            pf("  %d)",b);
                                        else if(b<1000)
                                            pf(" %d)",b);
                                            else
                                            pf("%d)",b);
                                    }
                pf("\n");
                            }
                        }

                    }
                }
                if(cnt==0) pf("No lines were found\n");
                v.clear();
                cnt=0;
            }
        }
        else
        {
            v.pb(mp(x,y));
        }
    }

    return 0;
}
