#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lok,t=1;
    while(cin>>lok)
    {
        if(lok==0)
            break;
        else
        {
            int m,n,i,node,s,s1;
            vector<int>adj[100000];
            queue<int>p;
            set<int>we;
            int level[100000],vis[100000];
            memset(vis,0,sizeof vis);
            memset(level,-1,sizeof level);
            int mn=0;
            for(i=0; i<lok; i++)
            {
                cin>>n>>m;
                adj[m].push_back(n);
                adj[n].push_back(m);
                we.insert(m);
                we.insert(n);
            }
            mn=we.size();
            int path1,path2;
            while(cin>>path1>>path2)
            {
                if(path1==0&&path2==0)
                    break;
                else
                {
                    int sum=0;
                    p.push(path1);
                    vis[path1]=1;
                    m=1;
                    level[path1]=0;
                    while(!p.empty())
                    {
                        s1=p.front();
                        p.pop();
                        int s2=adj[s1].size();
                        for(i=0; i<s2; i++)
                        {
                            int v=adj[s1][i];
                            if(vis[v]==0)
                            {
                                p.push(v);
                                vis[v]=1;
                                m++;
                                level[v]=level[s1]+1;
                                if(level[v]>path2)
                                    sum++;
                            }
                        }
                    }
                    if(adj[path1].size()==0)
                        cout<<"Case "<<t<<": "<<mn<<" nodes not reachable from node "<<path1<<" with TTL = "<<path2<<".\n";
                    else  if(m!=mn)
                        cout<<"Case "<<t<<": "<<mn-m+sum<<" nodes not reachable from node "<<path1<<" with TTL = "<<path2<<".\n";
                    else
                    cout<<"Case "<<t<<": "<<sum<<" nodes not reachable from node "<<path1<<" with TTL = "<<path2<<".\n";
                    t++;
                     memset(vis,0,sizeof vis);
                     memset(level,-1,sizeof level);
                }
            }
        }
    }
    return 0;
}
