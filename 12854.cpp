#include<stdio.h>

int main()
{   int j,x,i;
    int a[5],b[5];
    while(scanf("%d %d %d %d %d\n%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&b[0],&b[1],&b[2],&b[3],&b[4])==10)

    {
    x=0;
    for(i=0;i<=4;i++)
    {
        if(a[i]==b[i])
          {
            x++;
          }
    }
    if(x>=1)
       printf("N\n");
    else
        printf("Y\n");
    }


        return(0);
        }
