#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x,a[1000009];
 bool check(ll mid)
  {
  for(ll j=1;j<=x;j++)
   {
   if(a[j]-a[j-1]==mid)
   mid--;
   else if(a[j]-a[j-1]>mid)
   return false;
   }
   return true;
  }
 ll middle()
  { ll q=0;
   ll hi=1000009;
   ll lo=0;
   while(hi>=lo)
   {
     ll mid=(hi+lo)/2;
     if(check(mid))
     {hi=mid-1;
     q=mid;}
     else
     lo=mid+1;
   }
   return q;
 }
int main()
{
    ll k,i,n,c;
    cin>>n;
    for(k=0;k<n;k++)
    {
        cin>>x;
        a[0];
        for(i=1;i<=x;i++)
        {
         cin>>a[i];

        }
        ll result=middle();
        printf("Case %lld: %lld\n",k+1,result);
    }
    return 0;
}
