#include<bits/stdc++.h>
using namespace std;
typedef int long long  ll;
#define  inf     100000000


int main()
{
//    freopen("in.txt","r",stdin);
    cout<<"SHIPPING ROUTES OUTPUT"<<endl;
    cout<<endl;
    int t;
    cin>>t;
    for(int kk=0; kk<t; kk++)
    {

        int m,n,p,pp,a1,a2;
        string s,d;
        int lev[32],vis[32];
        vector<int>adj[35];
        cin>>m>>n>>p;
        map<string,int>we;
        for(int i=0; i<m; i++)
        {
            cin>>s;
            we[s]=i;
        }
        for(int i=0; i<n; i++)
        {
            cin>>s>>d;
            a1=we[s];
            a2=we[d];
            adj[a1].push_back(a2);
            adj[a2].push_back(a1);
        }
        cout<<"DATA SET  "<<kk+1<<endl;
        cout<<endl;
        for(int i=0; i<p; i++)
        {
            cin>>pp>>s>>d;
            int x=we[s];
            int y=we[d];
            memset(lev,-1,sizeof lev);
            memset(vis,0,sizeof vis);
            lev[x]=0;

            queue<int>pq;
            pq.push(x);
            vis[x]=1;
            while(!pq.empty())
            {
                int u=pq.front();
                pq.pop();
                for(int i=0; i<adj[u].size(); i++)
                {
                    int v=adj[u][i];
                    if(vis[v]==0)
                    {
                        vis[v]=1;
                        pq.push(v);
                        lev[v]=lev[u]+1;
                    }
                }
            }
            if(lev[y]==-1)
                cout<<"NO SHIPMENT POSSIBLE"<<endl;
            else
            {
                x=lev[y]*pp*100;
                printf("$%d\n",x);
            }

        }
        cout<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;

    return 0;
}
