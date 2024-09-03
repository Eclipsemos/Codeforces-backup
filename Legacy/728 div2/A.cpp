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
    int n;
    cin>>n;
    vector<int> arr;
    arr.push_back(0);
    for(int i=1;i<=n;i++)
         arr.push_back(i);
    if(n%2==0)
    {
        
         for(int i=1;i<=n;i+=2)
          {
              int temp  =arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
          }
    }
    else
    {
        for(int i=1;i<=n-1;i+=2)
        {
              int temp  =arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
          }
          int temp =arr[n];
          arr[n]=arr[n-1];
          arr[n-1]=temp;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
 int T;
 cin >> T;
 while (T--)
 solve();
 return 0;
}
