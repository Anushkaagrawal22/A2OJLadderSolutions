#include<bits/stdc++.h>
using namespace std;
int main()
{  
  int matrix[3][3];
  int matrix1[3][3]={{1,1,1},{1,1,1},{1,1,1}};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    cin>>matrix[i][j];
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      for(int t=matrix[i][j];t>0;t--)
      {
        matrix1[i][j]=1-matrix1[i][j];
        if(i+1<3) matrix1[i+1][j]=1-matrix1[i+1][j];
        if(j+1<3) matrix1[i][j+1]=1-matrix1[i][j+1];
        if(j-1>=0) matrix1[i][j-1]=1-matrix1[i][j-1];
        if(i-1>=0) matrix1[i-1][j]=1-matrix1[i-1][j];
      }
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    cout<<matrix1[i][j];
    cout<<endl;
  }
}