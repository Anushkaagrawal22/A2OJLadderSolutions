#include<bits/stdc++.h>
using namespace std;
int main()
{ freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    int t=m,z=n;
    char arr[n+m];
    if(n==m)
    {   arr[0]='G';
        cout<<arr[0];
        for(int i=1;i<n+m;i++)
        {
            if(arr[i-1]=='G')
            {    arr[i]='B';
                cout<<"B";
            }
            else
            {   arr[i]='G';
                cout<<"G";}
    }} 
    else if(n>m)
    {   arr[0]='B';
        cout<<arr[0];
        for(int i=1;i<n+t;i++)
        {
            if(m>0)
            {if(arr[i-1]=='B')
            {    arr[i]='G';
                cout<<"G";
                m--;}
            else
            {   arr[i]='B';
                cout<<"B";}}
            else
            {   arr[i]='B';
                cout<<"B";}
    }} 
    else if(m>n)
    {   arr[0]='G';
        cout<<arr[0];
        for(int i=1;i<z+t;i++)
        {
            if(n>0)
            {if(arr[i-1]=='G')
            {    arr[i]='B';
                cout<<"B";
                n--;}
            else
            {   arr[i]='G';
                cout<<"G";}}
            else
            {   arr[i]='G';
                cout<<"G";}
    }} 
  return 0;
}