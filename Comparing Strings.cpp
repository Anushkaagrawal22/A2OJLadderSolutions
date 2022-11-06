#include<bits/stdc++.h>
using namespace std;
int main()
{ int a=0,b=0;
  char c='0';
  string s1,s2;
  cin>>s1>>s2;
  string s3,s4;
  s3=s1;
  s4=s2;
  sort(s3.begin(),s3.end());
  sort(s4.begin(),s4.end());
  if(s3==s4)
  {for(int i=0;i<s1.size();i++)
  { 
  if(s1[i]==s2[i])
  a++;
  else
  b++ ;
  }
  if(a==(s1.size()-2)&&(s1.size()==s2.size()))
  cout<<"YES";
  else if(s1==s2)
  cout<<"YES";
  else
  cout<<"NO";
  }
  else
  cout<<"NO";
  return 0;
}