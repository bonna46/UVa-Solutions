#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll            int long long
#define pi            acos(-1)
#define pb            push_back
#define mp            make_pair
#define gcd(a,b)      __gcd(a,b)
#define lcd(a,b)     (a*b)/gcd(a,b)
#define M             1000000000
//div div[100][100];
//int br[100][100];
//int a[8]= {-1,-1,-1,0,0,1,1,1};
//int b[8]= {-1,0,1,-1,1,-1,0,1};


int  main()
{

    int t;
    scanf("%d",&t);
    for(int j1=1; j1<=t; j1++)
    {
        int b;
        cin>>b;
      if(b%3==2 ||b%3==0)
       cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
    }
    return 0;
}
