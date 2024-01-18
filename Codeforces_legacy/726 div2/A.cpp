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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int curr;
        cin>>curr;
        sum+=curr;
    }
    if(sum<n)
      cout<<1<<endl;
    else if(sum>n)
      cout<<sum-n<<endl;
    else 
      cout<<0<<endl;
    
}

int main()
{
 int T;
 cin >> T;
 while (T--)
 solve();
 return 0;
}
