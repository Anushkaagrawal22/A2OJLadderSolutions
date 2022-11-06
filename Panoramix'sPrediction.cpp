#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int a,b,k=0,l=0,m=0,n=0,i;
    cin>>a>>b;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        break;
        else
        k++;
        continue;
    }
    for(int i=2;i<b;i++)
    {
        if(b%i==0)
        break;
        else
        l++;
        continue;
    }
    for(int j=a+1;j<b;j++)
    {
        for(i=2;i<j;i++)
    {
        if(j%i==0)
        {
        break;
        }
    }
    if(j==i)
    m++;
    }
    if((k==a-2)&&(l==b-2)&&(m==0))
    cout<<"YES";
    else
    cout<<"NO";
}