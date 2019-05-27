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
 map<int,string>we;
    map<char,int>me,num;
    void func()
    {
       we[1]="I";
       we[2]="II";
       we[3]="III";
       we[4]="IV";
       we[5]="V";
       we[6]="VI";
       we[7]="VII";
       we[8]="VIII";
       we[9]="IX";
       we[10]="X";
       we[20]="XX";
       we[30]="XXX";
       we[40]="XL";
       we[50]="L";
       we[60]="LX";
       we[70]="LXX";
       we[80]="LXXX";
       we[90]="XC";
       we[100]="C";
       we[200]="CC";
       we[300]="CCC";
       we[400]="CD";
       we[500]="D";
       we[600]="DC";
       we[700]="DCC";
       we[800]="DCCC";
       we[900]="CM";
       we[1000]="M";
       we[2000]="MM";
       we[3000]="MMM";
       me['I']=1;
       me['V']=5;
       me['X']=10;
       me['L']=50;
       me['C']=100;
       me['D']=500;
       me['M']=1000;
       num['I']=1;
       num['V']=2;
       num['X']=3;
       num['L']=4;
       num['C']=5;
       num['D']=6;
       num['M']=7;
       return;
    }



int main()
{

    func();
  string s;
  while(cin>>s)
  {
      if(s[0]>='0' && s[0]<='9')
      {
          stringstream f(s);
          string x;
          int n;
          f>>n;
          int p;
          p=(n/1000)*1000;
          n=n%1000;
          if(p!=0) x+=we[p];
           p=(n/100)*100;
          n=n%100;
          if(p!=0) x+=we[p];
           p=(n/10)*10;
          n=n%10;
          if(p!=0) x+=we[p];
          if(n!=0) x+=we[n];
          printf("%s\n",x.c_str());
      }
      else
      {
          int ss=s.size();
          int sum=me[s[ss-1]];
          for(int i=ss-2;i>=0;i--)
          {
              if(num[s[i]]<num[s[i+1]])
                sum-=me[s[i]];
              else
                sum+=me[s[i]];
          }
         printf("%d\n",sum);
      }
  }
    return 0;
}
