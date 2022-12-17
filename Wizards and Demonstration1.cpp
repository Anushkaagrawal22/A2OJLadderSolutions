#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    float n,x,y;
    cin>>n>>x>>y;
    float nr=(y/100)*n;
    float f=nr-x;
    if(f>0)
    {   if((f-(int)f!=0))
        cout<<(int)f+1;
        else
        cout<<(int)f;
    }
    else
    cout<<"0";
  return 0;
}