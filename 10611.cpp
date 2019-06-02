#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll lowersearch(ll arr[],ll lo,ll hi,ll n,ll t1)
{   int p;
    while(hi>=lo)
     {
         ll mi=(lo+hi)/2;
      if(n>arr[mi])
           return lowersearch(arr,mi+1,hi,n,t1);
      else if(n<=arr[mi])
           return lowersearch(arr,lo,mi-1,n,t1);
    }
     if(arr[lo]==n&&lo!=0)
        return arr[lo-1];
    else if(n<=arr[0])
      return 0;
     else if(arr[lo]==n&&lo==0)
      return arr[t1-1];
     else
        return arr[hi];
}

ll uppersearch(ll arr[],ll lu,ll hu,ll n,ll t1)
{   int q;
    while(hu>=lu)
     {
         ll mi=(lu+hu)/2;
      if(n<arr[mi])
           return uppersearch(arr,lu,mi-1,n,t1);
      else if(n>=arr[mi])
           return uppersearch(arr,mi+1,hu,n,t1);
    }
     if(arr[hu]==n&&hu!=0)
        return arr[hu+1];
     else if(arr[hu]==n&&hu==0)
      return arr[lu];
      else if(n>=arr[t1-1])
      return 0;
     else
        return arr[lu];
}
int main(void)
 {ll t,ar[50000],c,a[25000],b[25000],z[25000],i,d,e,x;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>ar[i];
  }
  cin>>x;
  for(i=0;i<x;i++)
  {
      cin>>z[i];
      c=z[i];
        ll d=lowersearch(ar,0,t-1,c,t);
          ll e=uppersearch(ar,0,t-1,c,t);
          b[i]=e;
          a[i]=d;
  }
 for(i=0;i<x;i++)
  {   if(a[i]==0&&b[i]==0)
      cout<<"X X\n";
      else if(a[i]==0)
        cout<<"X "<<b[i]<<"\n";
      else if(b[i]==0)
        cout<<a[i]<<" X\n";
        else
     cout<<a[i]<<" "<<b[i]<<"\n";
  }
  return(0);
  }
