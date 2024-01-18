#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define N 1002001

bool ck(string s)
{
    for (int i = 0; i < s.size() / 2; ++i)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    string news;
   

        if (!ck(s + "a"))
        {
            cout << "YES" << endl;
            cout << s + "a" << endl;
            return;
        }
        else if (!ck("a" + s))
        {
            cout << "YES" << endl;
            cout << "a" + s << endl;
            return;
        }
    /*
  for(int i=0;i<=s.size();++i)
  {
      news=s.substr(0,i)+"a"+s.substr(i,s.size()-i);
      if(!ck(news))
      {
          cout<<"YES"<<endl;
          cout<<news<<endl;
          return;
      }
  } */
    cout<<"NO"<<endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}