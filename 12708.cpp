#include<bits/stdc++.h>
using namespace std;

int main()
{ int long long a[2000],b[2000];
int x,i;
cin>>x;
for(i=0;i<x;i++)
{
    cin>>a[i];
    b[i]=a[i]/2;
}

for(i=0;i<x;i++)
{
    cout<<b[i]<<"\n";
}
return 0;
}
