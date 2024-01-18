#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register int
#define tst cout<<'x'<<endl;
//EDGE
#define N 2e+5 

void solve()
{
   vi odd;
   vi even;
   int n;cin>>n;
   for(int i=0;i<n;i++)
   {
      int curr;
      cin>>curr;
      if(curr%2==0)
       even.push_back(curr);
      else
       odd.push_back(curr);
   }

   for(int i=0;i<odd.size();i++)
    cout<<odd[i]<<" ";
   for(int i=0;i<even.size();i++)
    cout<<even[i]<<" ";
   cout<<endl;
}

int main()
{
 int T;
 cin>>T;
 while(T--)
 solve();
 return 0;
}
