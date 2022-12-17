#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,j,i,sum=0,sum1=0,sum2=0;
  cin>>x;
  int arr[x][3];
  for(int j=0;j<x;j++){
  for(int i=0; i<3;i++)
  {
    cin>>arr[j][i];
  }
  }
  for(int w=0; w<x;w++){
    sum=sum+arr[w][0];
  }
  for(int k=0;k<x;k++){
     sum1=sum1+arr[k][1];
  }
  for(int v=0;v<x;v++){
     sum2=sum2+arr[v][2];
  }
  if((sum==0)&&(sum1==0)&&(sum2==0))
  cout<<"YES";
  else
  cout<<"NO";
  return 0;
}