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
#define sort(t)       sort(t.begin(),t.end())


int main()
{
    int n,m,l=1,x;
    while(cin>>n)
    {
        if(n==0) break;
        printf("Scenario #%d\n",l);
        l++;
        map<int,int>we;
        for(int i=1; i<=n; i++)
        {
            cin>>m;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                we[x]=i;
            }
        }
        vector<int>pq,re;
        queue<int>v[1001];
        string ss;
        int val=0;
        while(cin>>ss)
        {
            if(ss=="STOP")
            {
                cout<<endl;
                break;
            }
            if(ss=="ENQUEUE")
            {
                cin>>x;
                if(pq.size()==0 || pq.size()==val)
                {
                    pq.pb(x);
                    re.pb(100);
                    continue;
                }
                int po=we[x],f=0;
                for(int k=val; k<pq.size(); k++)
                {
                    int t=pq[k];
                    t=we[t];
                    if(po==t)
                    {
                        v[po].push(x);
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    pq.pb(x);
                    re.pb(100);
                }
            }
            else
            {
                int t=re[val];
                if(t==-1)
                {
                    t=we[pq[val]];
                    if(v[t].size()==0)
                    {
                        val++;
                        cout<<pq[val]<<endl;
                        re[val]=-1;
                        continue;
                    }
                    cout<<v[t].front()<<endl;
                    v[t].pop();
                }
                else
                {
                    cout<<pq[val]<<endl;
                    re[val]=-1;
                }
            }
        }
    }
    return 0;

}
