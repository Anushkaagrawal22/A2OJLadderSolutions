#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double e=c-a;
    double f=d-b;
    double g=sqrt(e*e+f*f);
    if(a==c)
    cout<<a+g<<" "<<b<<" "<<c+g<<" "<<d;
    else if(b==d)
    cout<<a<<" "<<b+g<<" "<<c<<" "<<d+g;
    else if(abs(b-d)==abs(a-c))
    cout<<c<<" "<<b<<" "<<a<<" "<<d;
    else
    cout<<"-1";
  return 0;
}