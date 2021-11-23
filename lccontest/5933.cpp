// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

class Solution
{
public:
    long long nextInt(long long now)
    {
        string s = to_string(now);
        int width = s.size();
        for (int i = width / 2; i >= 0; i--)
        {
            if (s[i] != '9')
            {
                s[i]++;
                if (width - 1 - i != i)
                    s[width - 1 - i]++;

                for (int j = i + 1; j <= width / 2; j++)
                {
                    s[j] = '0';
                    s[width - 1 - j] = '0';
                }
                return stoll(s);
            }
        }
        long long ans = 1;
        for (int i = 0; i < width; i++)
            ans *= 10;
        ans++;
        return ans;
    }

    bool isGood(string &s)
    {
        int n = s.size();
        for (int i = 0; i < n / 2; i++)
            if (s[i] != s[n - 1 - i])
                return false;
        return true;
    }

    string tokstring(long long num, int k)
    {
        string ans = "";
        while (num != 0)
        {
            ans += char(num % k + '0');
            num /= k;
        }
        return ans;
    }

    long long kMirror(int k, int n)
    {
        long long ans = 0, num = 0;
        while (n != 0)
        {
            num = nextInt(num);
            string s = tokstring(num,k);
            if(isGood(s))
            {
                ans+=num;
                n--;
            }
        }
        return ans;
    }
};
//
int main()
{
    Solution S;
    // vc v={};
    S.kMirror(3,7);
    return 0;
}
