#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define re register
//EDGE
#define N 2e+5
ll a, b, c;

int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

bool ok(ll num)
{
    if(num>=pow(10,b-1)&&num<=pow(10,b)-1)
     return true;
    return false;
}

void solve()
{
   
    cin >> a >> b >> c;
    if (a > b)
    {
        ll temp = a;
        a = b;
        b = temp;
    }
    ll c_1= pow(10,c-1);
    ll c_2= pow(10,c)-1;
    ll x=pow(10,a-1);
    ll y=pow(10,b-1);
    for(int i=c_1;i<=c_2;i++)
    {
         ll curr=i*x;
        while(ok(curr))
        {
            if(gcd())
        }
       
    }
  
}

int main()
{
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
