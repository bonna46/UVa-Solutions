#include<bits/stdc++.h>
#include<queue>
#include<string.h>
using namespace std;
int main()
{
int a,b,i,o,t=1;

while(cin>>a>>b&&(a!=0||b!=0))
{
        priority_queue<int>mine;
    for(i=0;i<a;i++)
    {
        scanf("%d",&o);
        mine.push(o);

    }
    int ar[10002],j=0;
      for(i=0;i<a;i++)
    {ar[j]=mine.top();
        mine.pop();
        j++;}
        printf("CASE# %d:\n",t);
        t++;
        int p;
        for(j=0;j<b;j++)
        {
            scanf("%d",&p);
                  for(i=0;i<a;i++)
                  {
                      if(ar[i]<p)
                        {printf("%d not found\n",p);
                        break;}
                        else if(ar[i]==p)
                        {
                            if(ar[i+1]!=p)
                            {
                                printf("%d found at %d\n",p,a-i);
                                break;
                            }
                        }

                  }
                  if(i==a)
                    printf("%d not found\n",p);
        }
}

 return 0;
}
