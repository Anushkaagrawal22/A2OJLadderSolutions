#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long n;
    cin>>n;
    long long c,k=0;
    for(long long c=1;c<=n;c++)
    {for(long long i=1;i<c;i++)
    {
       long double a=sqrt(c*c-i*i);
            if(abs((a-(long long)a)<1e-9)&&(a>=i))
            {
                k++;
            }
    } }
    cout<<k;
  return 0;
}