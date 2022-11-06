#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='W'&&arr[i+1]=='U'&&arr[i+2]=='B')
        i=i+2;
        else
        {cout<<arr[i];
        if(arr[i+1]=='W'&&arr[i+2]=='U'&&arr[i+3]=='B')
        cout<<" ";
        }
    }
  return 0;
}