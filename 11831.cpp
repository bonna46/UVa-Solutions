#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>
using namespace std;
#define ll            int long long
#define ull           unsigned long long
#define ld            long double
#define pi            acos(-1)
#define pb            push_back
#define pbk           pop_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a/gcd(a,b))*b
#define M             1000000000+7
#define sort(t)       sort(t.begin(),t.end())
//div div[100][100];
//int br[100][100];
//int a[8]= {-1,-1,-1,0,0,1,1,1};
//int b[8]= {-1,0,1,-1,1,-1,0,1};
char a[103][103];
int main()
{

    int n,m,k;
    while(cin>>n>>m>>k)
    {
        int xp=0,xn=0,yp=0,yn=0,posx,posy;
        if(n==0 && m==0 && k==0)
            break;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='O')
                {
                    xn=1;
                    posx=i;
                    posy=j;

                }
              else  if(a[i][j]=='L')
                {
                    xp=1;
                    posx=i;
                    posy=j;
                }
                else if(a[i][j]=='N')
                {
                    posx=i;
                    posy=j;
                    yp=1;
                }
                else if(a[i][j]=='S')
                {
                    posx=i;
                    posy=j;
                    yn=1;
                }

            }

        }
        string s;
        int ct=0;
        cin>>s;
        for(int i=0; i<k; i++)
        {
            char c=s[i];
            if(c=='D')
            {
                if(xp==1)
                {
                    yn=1;
                    xp=0;
                }
                else if(xn==1)
                {
                    yp=1;
                    xn=0;
                }
                else if(yp==1)
                {
                    xp=1;
                    yp=0;
                }
                else if(yn==1)
                {
                    xn=1;
                    yn=0;
                }
            }
            else if(c=='E')
            {
                if(xp==1)
                {
                    yp=1;
                    xp=0;
                }
                else if(xn==1)
                {
                    xn=0;
                    yn=1;
                }
                else if(yp==1)
                {
                    yp=0;
                    xn=1;
                }
                else if(yn==1)
                {
                    yn=0;
                    xp=1;
                }
            }
            else
            {
                if(xp==1)
                {
                    if(posy+1<m && a[posx][posy+1]!='#' )
                    {
                        posy++;
                    }
                    if(a[posx][posy]=='*')
                        {
                            ct++;
                            a[posx][posy]='.';
                        }
                }
                else if(xn==1)
                {
                    if(posy-1>=0 && a[posx][posy-1]!='#' )
                    {
                        posy--;
                    }
                    if(a[posx][posy]=='*')
                        {
                            ct++;
                            a[posx][posy]='.';
                        }
                }
                else if(yp==1)
                {
                    if(posx-1>=0 && a[posx-1][posy]!='#' )
                    {
                        posx--;
                    }
                    if(a[posx][posy]=='*')
                        {
                            ct++;
                            a[posx][posy]='.';
                        }
                }
                else if(yn==1)
                {
                    if(posx+1<n && a[posx+1][posy]!='#' )
                    {
                        posx++;
                    }
                    if(a[posx][posy]=='*')
                        {
                            ct++;
                            a[posx][posy]='.';
                        }
                }
            }
            //cout<<ct<<" "<<posx<<" "<<posy<<endl;
        }
        cout<<ct<<endl;
    }
    return 0;
}
