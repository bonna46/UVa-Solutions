#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
char p[30];
string x,y;
map<string,string>we;
map<string,string>::iterator it;
while(gets(p))
{
    if(strlen(p)==0)break;
    istringstream iss(p);
    iss>>x;
    iss>>y;
            we[y]=x;

}
while(cin>>x)
{
 it=we.find(x);
 if(it!=we.end())
        cout<<it->second;
 else
    cout<<"eh";
cout<<"\n";
}
return 0;
}
