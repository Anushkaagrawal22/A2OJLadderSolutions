#include<bits/stdc++.h>
using namespace std;
int main()
{ 
     int n,m,a=0;
     cin>>n>>m;
    //  a^2+b=n;
    //  a+b^2=m;
     if(n<=m)
     {for(int i=0;i<=n;i++)
     {
        for(int j=0;j<=n;j++)
        {
            if((i*i+j==n)&&(i+j*j==m))
            a++;
            else
            continue;
        }
     }
     }
     else
     {for(int i=0;i<=m;i++)
     {
        for(int j=0;j<=m;j++)
        {
            if((i*i+j==n)&&(i+j*j==m))
            a++;
            else
            continue;
        }
     }
     }
     cout<<a;
  return 0;
}