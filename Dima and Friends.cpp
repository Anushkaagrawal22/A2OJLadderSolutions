#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,m=0,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
        for(int i=1;i<=5;i++)
    {
        if(((sum+i)%(n+1))!=1)
        m++;   
    }  
    cout<<m;
  return 0;
}