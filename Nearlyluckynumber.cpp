#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a=0,b=0;
  long long n,t;
  cin>>n;
  t=n;
  int rem;
  do
  {
    rem=n%10;
    n=n/10;
    if((rem==4)||(rem==7))
    b++;
  } while (
      n>0
  );
  if((b==4)||(b==7)||(b==47)||(b==74))
  cout<<"YES";
  else
  cout<<"NO";  
}