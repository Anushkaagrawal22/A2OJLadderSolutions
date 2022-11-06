#include<bits/stdc++.h>
using namespace std;
int main()
{  int a=0;
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if((arr[i]=='0')&&(arr[i+1]=='0')&&(arr[i+2]=='0')&&(arr[i+3]=='0')&&(arr[i+4]=='0')&&(arr[i+5]=='0')&&(arr[i+6]=='0'))
        {
            a++;
            i=i+5;
        }
        else if((arr[i]=='1')&&(arr[i+1]=='1')&&(arr[i+2]=='1')&&(arr[i+3]=='1')&&(arr[i+4]=='1')&&(arr[i+5]=='1')&&(arr[i+6]=='1'))
        {
            a++;
            i=i+5;
        }
        else
        continue;
    }
    if(a>0)
    cout<<"YES";
    else
    cout<<"NO";
  return 0;
}