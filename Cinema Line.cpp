#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,a=0,b=0,c=0,d=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==25)
        a++;
        else if((arr[i]==50)&&(a>0))
        {
          a=a-1;
          b++;
        }
        else if(arr[i]==100)
        {
          if((a>0)&&(b>=1))
          {
            a=a-1;
            b=b-1;
          }
          else if(a>=3)
          {
            a=a-3;
          }
          else
          {c++;}
        }
        else if((arr[i]==50)&&(a==0))
        {
          d++;
        }
    }
    if((c>0)||(d>0))
    cout<<"NO";
    else
    cout<<"YES";
  return 0;
}