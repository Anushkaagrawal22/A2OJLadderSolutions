#include<bits/stdc++.h>
using namespace std;
void solve()
{
   float a;
  cin>>a;
  float n;
   n = 360 / (180 - a);
    if (n == (int)n)
        cout << "YES"<<"\n";
    else
        cout << "NO"<<"\n";
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    solve();
  }
}