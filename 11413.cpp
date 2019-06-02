#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[1008],m,n,sum;

bool check(ll mid)
{  ll i,j;
    for(i=0,j=0;i<m;i++)
    {
      ll c=mid;
      while(c>=a[j]&&j<n)
            {c=c-a[j];
            j++;}
    }
    if(j==n)
        return true;
    else
        return false;
}

ll Binary_Search()
 {
      ll hi,lo,mid,ans;
      lo=0;
      hi=sum;
    while(hi>=lo)
    {
          mid=(hi+lo)/2;

       if(check(mid))
         {
          hi=mid-1;
          ans=mid;}
       else
           lo=mid+1;

    }
       return ans;
 }


int main()
{
     ll i,ans;
  while(scanf("%lld %lld",&n,&m)!=EOF)
  {
      sum=0;
   for(i=0;i<n;i++)
   {
       scanf("%lld",&a[i]);
       sum=sum+a[i];
   }
   ans=Binary_Search();
   printf("%lld\n",ans);
  }

return 0;
}
