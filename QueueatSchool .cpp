#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,j,temp=0; 
    cin>>n;
    cin>>t;
    char arr[n];
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    for(int y=0;y<t;y++)
    {
    for(int i=0;i<n;i++) 
    {
        
            k=arr[i];
            j=arr[i+1];
            if(k=='B' && j=='G')
            {
                temp=k;
                k=j;
                j=temp;
                arr[i]=k;
                arr[i+1]=j;
                i++;
            }
        }
    }
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i];
    }
}