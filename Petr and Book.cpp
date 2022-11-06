#include<bits/stdc++.h>
using namespace std;
void fuck(int sum,int n,int sum1,int arr[])
{
  for(int i=0;i<7;i++)
    {sum=sum+arr[i];
      if((sum>=n)&&(sum1<=n))
      {cout<<i+1;
      break;}
      else
      { sum1=sum;
        continue;
      }
    }  
    if(sum<n)
    fuck(sum,n,sum1,arr);
}
int main()
{  
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++)
    cin>>arr[i];
    int sum=0,sum1=0;
    for(int i=0;i<7;i++)
    {sum=sum+arr[i];
      if((sum>=n)&&(sum1<=n))
      {cout<<i+1;
      break;}
      else
      { sum1=sum;
        continue;
      }
    }  
    if(sum<n)
    fuck(sum,n,sum1,arr);
  return 0;
}