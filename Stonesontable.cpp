#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,a=0;
   cin>>n;
   char arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   for(int i=0;i<n;i++)
   {
    if(arr[i]=='R')
    {
        if(arr[i+1]=='G')
        continue;
        else if(arr[i+1]=='B')
        continue;
        else
        a++;
    }
    else if(arr[i]=='G')
    {
        if(arr[i+1]=='R')
        continue;
        else if(arr[i+1]=='B')
        continue;
        else
        a++;
    }
    else if(arr[i]=='B')
    {
        if(arr[i+1]=='R')
        continue;
        else if(arr[i+1]=='G')
        continue;
        else
        a++;
    }
   }
   cout<<(a-1);
}