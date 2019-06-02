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
#define M             4294967296
#define MINI          100000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//it=myset.find(20);
//int ar[8]= {0,0,-1,1,-1,1,-1,1};
//int br[8]= {-1,1,0,0,-1,1,1,-1};


int main()
{
    int n,t;
    string s;
    cin>>t;
    for(int t1=1; t1<=t; t1++)
    {
        map<int,int>we;
        we[1]=0;
        we[2]=0;
        we[3]=0;
        we[4]=0;
        we[5]=0;
        we[6]=0;
        cin>>s;
        n=s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='M')
                we[1]++;
           else if(s[i]=='A')
                we[2]++;
          else  if(s[i]=='G')
                we[3]++;
          else  if(s[i]=='R')
                we[4]++;
          else  if(s[i]=='I')
                we[5]++;
          else  if(s[i]=='T')
                we[6]++;
        }
        we[2]=we[2]/3;
        we[4]=we[4]/2;
        vector<int>v;
        v.pb(we[1]);
        v.pb(we[2]);
        v.pb(we[3]);
        v.pb(we[4]);
        v.pb(we[5]);
        v.pb(we[6]);
        sort(v);
        cout<<v[0]<<endl;
    }
    return 0;
}
