#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    arr[i]=tolower(arr[i]);
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='o'||arr[i]=='i'||arr[i]=='u'||arr[i]=='y')
        continue;
        else 
        cout<<"."<<arr[i];
    }
  return 0;
}