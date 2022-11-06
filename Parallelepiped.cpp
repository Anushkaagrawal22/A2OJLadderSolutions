#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int x,y,z,l=0,b=0,h=0;
    cin>>x>>y>>z;
        for(int i=0;i<=10000;i++)
        {
            if(i*i==(y*z)/x)
            {
                h=i;
                break;
            }
            else
            continue;
        }
        b=y/h;
        l=x/b;
    cout<<4*(l+b+h);
  return 0;
}