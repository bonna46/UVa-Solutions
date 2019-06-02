#include<bits/stdc++.h>
#include<deque>

using namespace std;
int main()
{
int s;
queue<int>m1;
     while(cin>>s)
    {
    if(s==0)break;
    else if(s==1){    cout<<"Discarded cards:\n";
    cout<<"Remaining card: 1\n";}
    else
    {
    cout<<"Discarded cards: ";
        for(int i=1;i<=s;i++)
        {m1.push(i);
        }
         while(m1.size()!=2)
         {
            cout<<m1.front()<<", ";
             m1.pop();
             m1.push(m1.front());
             m1.pop();
         }
         cout<<m1.front();
             m1.pop();
         cout<<"\nRemaining card: "<<m1.front()<<"\n";
         m1.pop();
    }
    }
return 0;
}
