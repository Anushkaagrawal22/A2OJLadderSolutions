#include<bits/stdc++.h>
using namespace std;
void rec(int n,int m)
{
    int j=0;
    for(int i=1;i<(n+1);i++)
    {
        if(m-i<0)
        break;
        else
        {m=m-i;
        j++;}
    }
    if(j<n)
   cout<<m;
   else
   rec(n,m);
}
int main()
{  
    int n,m,k=0;
    cin>>n>>m;
    for(int i=1;i<(n+1);i++)
    {
        if(m-i<0)
        break;
        else
        {m=m-i;
        k++;}
    }
    if(k<n)
   cout<<m;
   else
   rec(n,m);
  return 0;
}