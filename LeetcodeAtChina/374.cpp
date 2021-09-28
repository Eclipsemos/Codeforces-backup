#include <bits/stdc++.h>
using namespace std;

/* 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(long long n)
{
    if (n == 6)
        return 0;
    else if (n < 6)
        return -1;
    else
        return 1;
}

class Solution
{
public:
    int guessNumber(int n)
    {
        long long l, r;
        l = 1;
        r = n;
        if (guess(l) == 0)
            return l;
        else if (guess(r) == 0)
            return r;
        long long mid;

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (guess(mid) == 0)
                return mid;
            if (guess(mid) == 1)
                l = mid + 1;
            if (guess(mid)==-1)
                r = mid-1;
        }
        return mid;
    }
};

int main()
{
    Solution S;
    cout<<S.guessNumber(10);
    return 0;
}