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
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    //special judge
    if(n==1&&m==1)
     {
         cout<<"1 1 1 1"<<endl;
         return;
     }
    //
    int ansx1,ansy1,ansx2,ansy2;
    ansx1=1;
    ansx2=n;
    ansy1=m;
    ansy2=1;
    cout<<ansx1<<" "<<ansy1<<" "<<ansx2<<" "<<ansy2<<endl;
}

int main()
{
 int T;
 cin >> T;
 while (T--)
 solve();
 return 0;
}
