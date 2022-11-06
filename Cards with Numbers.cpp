#include<bits/stdc++.h>
using namespace std;
int main()
{
  freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int n,a=0;
    cin>>n;
    pair<int,int> arr[2*n];
    for(int i=0;i<2*n;i++)
    {
      cin>>arr[i].first;
      arr[i].second=i+1;
    }
    sort(arr,arr+2*n);
    for(int i=0;i<2*n-1;i++)
    {
      if(i%2==0)
      {if(arr[i].first!=arr[i+1].first)
      {
        a++;
      }}
    }
    if(a>0)
    cout<<"-1";
    else
    {for(int i=0;i<2*n-1;i++)
    {
        cout<<arr[i].second<<" "<<arr[i+1].second<<"\n";
        i=i+1; 
    }}
  return 0;
}