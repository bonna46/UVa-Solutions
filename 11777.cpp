#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x,t,b,c,d,d1,d2,i,j,a[3];
 cin>>t;
for(i=1;i<=t;i++)
{
 cin>>x>>b>>c>>d>>a[0]>>a[1]>>a[2];
 for(j=0;j<2;j++)
 {
 if(a[j]>a[j+1])
 swap(a[j],a[j+1]);
 }
 if(a[0]>a[1])
 swap(a[0],a[1]);
 d1=(a[1]+a[2])/2;
 d2=x+b+c+d+d1;
 if(d2>=90)
 cout<<"Case "<<i<<": "<<"A\n";
 else if(d2<=89&&d2>=80)
 cout<<"Case "<<i<<": "<<"B\n";
  else if(d2<=79&&d2>=70)
 cout<<"Case "<<i<<": "<<"C\n";
  else if(d2<=69&&d2>=60)
 cout<<"Case "<<i<<": "<<"D\n";
  else if(d2<=59)
 cout<<"Case "<<i<<": "<<"F\n";
}

return 0;
}
