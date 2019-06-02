#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,p[10],q[10],i,j,c;
 char a1[101],a2[101],a3[101],a4[101],a5[101],a6[101],a7[101],a8[101],a9[101],a10[101];
 cin>>t;
for(i=1;i<=t;i++)
{
 cin>>a1>>p[0]>>a2>>p[1]>>a3>>p[2]>>a4>>p[3]>>a5>>p[4]>>a6>>p[5]>>a7>>p[6]>>a8>>p[7]>>a9>>p[8]>>a10>>p[9];
 q[0]=p[0];
 q[1]=p[1];
  q[2]=p[2];
 q[3]=p[3];
 q[4]=p[4];
 q[5]=p[5];
 q[6]=p[6];
  q[7]=p[7];
   q[8]=p[8];
    q[9]=p[9];
 for(j=0;j<9;j++)
 {
     if(p[j]>p[j+1])
        swap(p[j],p[j+1]);
 }
 c=p[9];
 cout<<"Case #"<<i<<":\n";
 if(c==q[0])
 cout<<a1<<"\n";
 if(c==q[1])
 cout<<a2<<"\n";
  if(c==q[2])
 cout<<a3<<"\n";
  if(c==q[3])
 cout<<a4<<"\n";
  if(c==q[4])
 cout<<a5<<"\n";
  if(c==q[5])
 cout<<a6<<"\n";
  if(c==q[6])
 cout<<a7<<"\n";
  if(c==q[7])
 cout<<a8<<"\n";
  if(c==q[8])
 cout<<a9<<"\n";
  if(c==q[9])
 cout<<a10<<"\n";

}

return 0;
}
