#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  int arr[m];
  for(int i=0;i<m;i++)
  cin>>arr[i];
  sort(arr,arr+m);
  int dif=arr[n-1]-arr[0];
  int minn=dif;
  for(int i=0;i<=m-n;i++)
  {
    dif=abs(arr[n-1+i]-arr[i]);
    minn=min(minn,dif);
  }
  cout<<minn;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    solve();
}