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
        int b,sum=1;
        cin>>b;
        for(int i=2;i<b;i++)
        {
                if(b%i==0)
                        sum+=i;
        }
      if(sum<b)
       cout<<"deficient"<<endl;
        else if(sum==b)
                cout<<"perfect"<<endl;
                else
                 cout<<"abundant"<<endl;
    }
    return 0;
}
