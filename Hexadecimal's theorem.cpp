#include<bits/stdc++.h>
using namespace std;
int fab(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fab(n-1)+fab(n-2));
}
int main()
{  
    int n,b=0,a=0;
    cin>>n;
    int c=n;
    if(n==(fab(a)+fab(b)+c))
    cout<<a<<" "<<b<<" "<<c;
    else
    cout<<"I'm too stupid to solve this problem";
  return 0;
}