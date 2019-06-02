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
#define M             1000000000+7
#define sort(t)       sort(t.begin(),t.end())
//div div[100][100];
//int br[100][100];
//int a[8]= {-1,-1,-1,0,0,1,1,1};
//int b[8]= {-1,0,1,-1,1,-1,0,1};

int main()
{
    int t,t1,sz;
    cin>>t;
    for(int t1=0;t1<t;t1++)
    {
        string s;
        cin>>s;
        int ss=s.size();
        for(int j=ss;j>0;j--)
        {
           int  ps=j;
           string d;
         for(int i=0;i<j;i++)
            d+=s[i];
         int f=0;
           for(int i=0;i<ss;i+=j)
           {
               string dd;
              for(int b=i;b<i+j;b++)
                dd+=s[b];
              if(dd!=d)
                f=1;
           }
           if(f==0)
            sz=j;
        }
        cout<<sz<<endl;
        if(t1!=t-1)
            cout<<endl;
    }

    return 0;
}
