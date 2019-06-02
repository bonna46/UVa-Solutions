#include <bits/stdc++.h>

using namespace std;
#define ll            int
#define ull           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define M             1000000007
#define sort(t)       sort(t.begin(),t.end())
//div div[100][100];
//int br[100][100];
//int a[8]= {-1,-1,-1,0,0,1,1,1};
//int b[8]= {-1,0,1,-1,1,-1,0,1};


int main()
{ string c,y;
map<string,string>we;
map<string,string>::iterator it;
map<string,int>me;
  while(getline(cin,c))
  {
      if(c.size()==1 && c[0]=='#')
        break;
      istringstream x(c);
      while(x>>y)
      { string s1,s="";
      s1=y;
          vector<char>a;
          for(int i=0;i<y.size();i++)
          {
              if(y[i]>='A' && y[i]<='Z')
              {
                  char r=y[i]+32;
                  a.pb(r);
              }
              else
                 a.pb(y[i]);
          }
          sort(a);
           for(int i=0;i<a.size();i++)
            s+=a[i];
           it=we.find(s);
           if(it!=we.end())
            me[s]++;
           else
           {
               we[s]=s1;
               me[s]=1;
           }
      }
  }
  vector<string>p;
  for(it=we.begin();it!=we.end();it++)
  {
      if(me[it->first]==1)
        p.pb(it->second);
  }
  sort(p);
  for(int i=0;i<p.size();i++)
    cout<<p[i]<<endl;
    return 0;
}
