#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lok,t=0;
    while(cin>>lok)
    {
            int m,n,i,node,s,s1,j,p1,p2;
            vector<int>adj[100000];
            queue<int>p;
            int level[21],vis[21];
            memset(vis,0,sizeof vis);
            memset(level,-1,sizeof level);
            if(lok!=0)
            {
                        for(i=0; i<lok; i++)
              {
                cin>>s;
                adj[1].push_back(s);
                adj[s].push_back(1);
               }
            }
            for(i=2;i<=19;i++)
                    {
                            cin>>node;
                            if(node==0)
                                continue;
                            for(j=0;j<node;j++)
                            {
                                    cin>>s;
                                    adj[i].push_back(s);
                                    adj[s].push_back(i);
                            }
                    }
                    cin>>node;
                    t++;
            for(int k=0;k<node;k++)
            {
               cin>>p1>>p2;
                    p.push(p1);
                    vis[p1]=1;
                    int v;
                    level[p1]=0;
                    while(!p.empty())
                    {
                        s1=p.front();
                        p.pop();
                        int s2=adj[s1].size();
                        for(i=0; i<s2; i++)
                        {
                            v=adj[s1][i];
                            if(vis[v]==0)
                            {
                                p.push(v);
                                vis[v]=1;
                                level[v]=level[s1]+1;
                                if(v==p2)break;
                            }
                        }
                        if(v==p2)break;
                    }
                    if(k==0)
                    cout<<"Test Set #"<<t<<"\n";
                    if(p1<10)
                        cout<<" "<<p1<<" to ";
                        else
                    cout<<p1<<" to ";
                    if(p2<10)
                    cout<<" "<<p2<<": "<<level[v]<<"\n";
                    else
                    cout<<p2<<": "<<level[v]<<"\n";
                    while(!p.empty())
                        p.pop();
                        memset(vis,0,sizeof vis);
                     memset(level,-1,sizeof level);

            }
            cout<<"\n";
    }
    return 0;
}
