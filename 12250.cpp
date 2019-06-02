#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[14];
    int y=0,i=1;
    while(cin>>a&&a[0]!='#')
    {
    if(strcmp(a,"BONJOUR")==0)
      cout<<"Case "<<i<<": FRENCH\n";
    else if(strcmp(a,"CIAO")==0)
       cout<<"Case "<<i<<": ITALIAN\n";
      else if(strcmp(a,"HELLO")==0)
       cout<<"Case "<<i<<": ENGLISH\n";
        else if(strcmp(a,"HOLA")==0)
         cout<<"Case "<<i<<": SPANISH\n";
          else if(strcmp(a,"HALLO")==0)
           cout<<"Case "<<i<<": GERMAN\n";
            else if(strcmp(a,"ZDRAVSTVUJTE")==0)
             cout<<"Case "<<i<<": RUSSIAN\n";
             else
                 cout<<"Case "<<i<<": UNKNOWN\n";
                 i++;
    }
    return 0;
}
