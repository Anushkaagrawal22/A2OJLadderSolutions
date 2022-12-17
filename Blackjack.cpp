#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int k=15;
    n=n-10;
    if(n<=0)
    cout<<"0";
    if((n<10)&&(n!=0)&&(n>0))
    cout<<4*1;
    if(n==10)
    cout<<k;
    if(n==11)
    cout<<4;
    if(n>=12)
    cout<<"0";
  return 0;
}