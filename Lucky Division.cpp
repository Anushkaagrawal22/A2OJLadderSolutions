#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,b=0;
    cin>>n;
    string arr=to_string(n);
    for(int i=0;i<arr.size();i++) 
    {
        if(arr[i]=='4'||arr[i]=='7')
        b++;
        else
        break;
    }
    if(b==arr.size())
    cout<<"YES";
    else if(n%4==0||n%7==0||n%47==0||n%74==0||n%744==0||n%474==0||n%447==0)
    cout<<"YES";
    else
    cout<<"NO";
  return 0;
}