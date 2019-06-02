#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>
using namespace std;

#define ll            int long long
#define ull           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define inf            10000000000000000+7
#define M             1000000002
#define MINI         -1000000003
#define READ          freopen("in.txt","r",stdin);
#define WRITE         freopen("outer.txt","w",stdout);
#define sort(t)       sort(t.begin(),t.end())
//#define for(i,a,n)    for(int i=a;i<n;i++)
#define mem(a,b)      memset(a,b,sizeof a)
//div div[100][100];
//int br[100][100];
//it=myset.find(20);
//int a[8]= {0,0,-1,1,-1,1,-1,1};
//int b[8]= {-1,1,0,0,-1,1,1,-1};


int main()
{
    vector<int>v;
    int n;
    while(cin>>n)
    {
        if(n!=0)
        v.pb(n);
        else
        {
            if(v.size()==0)
                break;
            else
            {
                sort(v);
                int f=0,g=1;
                for(int i=1;i<v.size();i++)
                {
                    if(f==0)
                    {
                        f=1;
                        g=v[i]-v[i-1];
                    }
                    else
                        g=gcd(g,v[i]-v[i-1]);
                }
                cout<<g<<endl;
                v.clear();
            }
        }
    }
    return 0;
}
