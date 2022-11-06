#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int j=0;
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++) 
    {
        if(arr[i]=='0')
       {
        j=i;
        break;
       }
    }
    for(int i=0;i<arr.size();i++) 
    {
        if(j!=i)
        cout<<arr[i];
    }
  return 0;
}