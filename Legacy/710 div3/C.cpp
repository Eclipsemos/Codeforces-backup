#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll llinf = 4223372036854775807;

////////////////////////////////////////////////
void solve()
{
  string a,b;
  cin>>a>>b;
  if(a.size()>b.size())
  {
      string tmp = a;
      a=b;
      b=tmp;
  }
  int m=a.size(),n=b.size();
  int arr[m][n];
  memset(arr,0,sizeof(arr));
  int max=0;
  for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          if(a[i]==b[j])
          {
            if(i>=1&&j>=1&&arr[i-1][j-1]!=0)
            {
              arr[i][j]=arr[i-1][j-1]+1;
            }
            else 
            {
              arr[i][j]=1;
            }
            if(arr[i][j]>max)
            max=arr[i][j];
          }
      }
  }

 //cout<<"HELLO"<<endl;
  cout<<a.size()+b.size()-2*max<<endl;
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}