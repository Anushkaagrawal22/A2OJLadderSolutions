using namespace std;
int main()
{  int a=0;
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='h')
        {
            for(int j=(i+1);j<arr.size();j++)
            if(arr[j]=='e')
            {
               for(int k=(j+1);k<arr.size();k++)
            if(arr[k]=='l') 
            {
                for(int l=(k+1);l<arr.size();l++)
            if(arr[l]=='l')
            {
                for(int m=(l+1);m<arr.size();m++)
            {if(arr[m]=='o')
              a++;
            }
            }
            }
            }
        }
    }
    if(a>0)
    cout<<"YES";
    else
    cout<<"NO";
  return 0;
}