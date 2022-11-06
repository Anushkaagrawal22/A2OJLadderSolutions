#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    long double sum=0,percent;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    percent=sum/n;
    printf("%0.12Lf",percent);
}