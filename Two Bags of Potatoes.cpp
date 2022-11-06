#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long y=0,k=0,n=0,flag=0,a=0,last=0;
    cin>>y>>k>>n;
    if(n<=y)
    cout<<"-1";
    else
    {
        for(int i=1;i<10000;i++)
        {
            if(k*i>=y)
            {
              a=i;
              break;
            }
        }
        last=(n-y);
        if(k*a-y==0)
        {for(int i=k;i<=last;i+=k)
        {
            flag=1;
        cout<<i<<" ";
        }
        }
        else
        {for(int i=k*a-y;i<=last;i+=k)
        {
            flag=1;
        cout<<i<<" ";
        }}
        if(!flag) cout<<-1;
    }
  return 0;
}