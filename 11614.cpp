#include<bits/stdc++.h>
using namespace std;
int main(void)
 {int long long i,n,n1,t,x;
  cin>>t;
  for(i=0;i<t;i++)
  {
  cin>>x;
  n=sqrt(x*2);
  n1=(n*(n+1))/2;
  if(n1==x)
  cout<<n<<"\n";
  else if(n1<x)
  cout<<n<<"\n";
  else
  cout<<n-1<<"\n";
  }
  return(0);
  }
