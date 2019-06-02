#include<bits/stdc++.h>
using namespace std;
typedef int long long ll;
int main()
{ll n,p=0,m,i,x;
map<ll,ll>we;
map<ll,ll>::iterator it;
stack<ll>me;

while(cin>>n>>m)
        if(n==0&&m==0)
        break;
else
{p=0;
 for(i=0;i<n;i++)
             {
             cin>>x;
             we[x]=x;
             me.push(x);
             }
 for(i=0;i<m;i++)
 {
         cin>>x;
         it=we.find(x);
         if(it!=we.end())
                p++;
 }
  cout<<p<<"\n";
   for(i=0;i<n;i++)
{
        x=me.top();
        we.erase(x);
        me.pop();
}
}

return 0;
}

