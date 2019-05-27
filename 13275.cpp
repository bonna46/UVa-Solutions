#include<bits/stdc++.h>
using namespace std;

bool check_leap(int y)
{
    if(y%400==0) return true;
    else if(y%100==0) return false;
    else if(y%4==0) return true;
    return false;
}


int fun1(int by,int cy)
{
    // cout<<"y"<<endl;
    int temp=by+4,cnt=0;

    while(temp<=cy)
    {
        if(check_leap(temp)) cnt++;

        temp+=4;
    }
    return cnt;
}

int fun2(int by,int cy)
{
   // cout<<"y"<<endl;
    return cy-by;
}


int main()
{
    int tc;
    int date,month,b,c,ans;

    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        cin>>date>>month>>b>>c;

        if(date==29 && month==2)
            ans=fun1(b,c);
        else ans=fun2(b,c);
    cout<<"Case "<<cs<<": "<<ans<<endl;

    }

}
