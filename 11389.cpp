#include<bits/stdc++.h>
using namespace std;

#define lli                          int long long
#define sort(v)                      sort(v.begin(),v.end())
#define pb                           push_back
#define dist(ax,ay,bx,by)            ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))


int main()
{
    int n,d,r;
    while(scanf("%d %d %d",&n,&d,&r))
    {
        if(n+d+r==0)
            break;
        else
        {
            int x;
            vector<int>v,m;
            for(int i=0; i<n; i++)
            {
                scanf("%d",&x);
                m.pb(x);
            }
            for(int i=0; i<n; i++)
            {
                scanf("%d",&x);
                v.pb(x);
            }
            sort(m);
            sort(v);
            reverse(v.begin(),v.end());
            lli sum=0;
            for(int i=0; i<n; i++)
            {
                //cout<<v[i]+m[i]<<endl;
                if(v[i]+m[i]>d)
                sum+=((v[i]+m[i])-d);
            }
            cout<<sum*r<<endl;
        }
    }


    return 0;
}
