#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(long long n)
{
    if (n == 5 || n == 4)
        return 1;
    else
        return 0;
}

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long long l, r;
        l = 1;
        r = n;
        if (isBadVersion(1))
            return 1;
        long long mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (isBadVersion(mid))
            {
                if (!isBadVersion(mid - 1))
                    return mid;
                else
                {
                    r = mid - 1;
                }
            }
            else
            {
                if (isBadVersion(mid + 1))
                    return mid + 1;
                else
                {
                    l = mid + 1;
                }
            }
        }
        return 1;
    }
};
int main()
{
    Solution S;
    cout << S.firstBadVersion(5);
    return 0;
}