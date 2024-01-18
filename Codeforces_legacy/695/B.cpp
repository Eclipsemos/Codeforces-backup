#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 0x3f3f3f3f;
ll num=0;

template<class T>inline void rd(T &x){
   x=0;char o,f=1;
   while(o=getchar(),o<48)if(o==45)f=-f;
   do x=(x<<3)+(x<<1)+(o^48);
   while(o=getchar(),o>47);
   x*=f;
}
template<class T>
void wt(T x){
   if(x < 0) putchar('-'), x = -x;
   if(x >= 10) wt(x / 10);
   putchar('0' + x % 10);
}

bool check(ll i,vector<ll> time, vector<ll> ar)
{
    if(time[i]!=0)
    {
        if(i>0&&i<num)
        {
            if((ar[i]-ar[i+1])*(ar[i]-ar[i-1])<0)
            {
                return false;
            }
        }
    }
    return true;
}

void solve()
{

    ll  sum = 0;
    cin >> num;
    vector<ll> arr;
    vector<ll> times(num, 0);
    bool hil = false;
    bool val = false;
    for (ll i = 0; i < num; i++)
    {
        ll item;
        cin >> item;
        arr.push_back(item);
        bool flag = false;
        if (i > 0)
        {
            if (item > arr[i - 1])
            {
                hil = true;
                if (val == true)
                {
                    val = false;
                    sum++;
                    flag = true;
                    // times[i]++;
                    // if (i > 1)
                    //     times[i - 1]++;
                    // if (i > 2)
                    //     times[i - 2]++;
                }
            }
            else if (item < arr[i - 1])
            {
                val = true;
                if (hil == true)
                {
                    hil = false;
                    sum++;
                    flag = true;
                    // times[i]++;
                    // if (i > 1)
                    //     times[i - 1]++;
                    // if (i > 2)
                    //     times[i - 2]++;
                }
            }
            else
            {
                val = false;
                hil = false;
            }
            if (flag == true)
            {
                if(check(i,times,arr))
                times[i]++;
                if (i >= 1&&check(i-1,times,arr))
                    times[i - 1]++;
                if (i >= 2&&check(i-2,times,arr))
                    times[i - 2]++;
            }
        }
    }
    ll sum_decrease = 0;
    for (ll i = 0; i < times.size(); i++)
        if (times[i] > sum_decrease)
            sum_decrease = times[i];
  //  cout<<sum<<" "<<sum_decrease<<endl;
    cout << sum - sum_decrease << endl;
}

int main()
{
    int number = 0;
    cin >> number;
    for (ll i = 0; i < number; i++)
        solve();
    return 0;
}