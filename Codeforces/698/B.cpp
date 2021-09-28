#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;

////////////////////////////////////////////////
void solve()
{
  int num,d;
  cin>>num>>d;
  vector<int> arr(num,0);
  for(int i=0;i<num;i++)
      cin>>arr[i];
  bool flag=false;
  for(int i=0;i<num;i++)
  {
      int max_num=arr[i]/10;
      for(int j=0;j<=max_num;j++)
      {
          int curr=arr[i]-j*10;
          if(curr!=0&&curr%d==0)
          {
              flag=true;
              cout<<j<<endl;
          }
      }   
      if(flag==true)
      {
          cout<<"YES"<<endl;
          
          flag=false;
      }
      else
      {
          cout<<"NO"<<endl;
      }
      
  }
 
}

int main()
{
  int number = 0;
  cin >> number;
  for (ll i = 0; i < number; i++)
    solve();
  return 0;
}