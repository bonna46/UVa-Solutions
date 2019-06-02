#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
  int long long n;
  double i,ans,a,b,c,s;
  while(cin>>a>>b>>c)
  {
      s=(a+b+c)/2;
      i=s*(s-a)*(s-b)*(s-c);
      ans=sqrt(i);
      ans=ans*4/3;
      if(ans>0)
      printf("%.3lf\n",ans);

      else
      cout<<"-1.000\n";
  }
  return 0;
}
