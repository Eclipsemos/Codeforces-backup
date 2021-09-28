#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        int index = 0;
        int size = chalk.size();
        if(size==1||k<chalk[index])
        return 0;
        long long sum =0;
        for(auto it:chalk)
         sum+=it;
        k=k%sum;
        if(k==0)
         return 0;
        while(1)
        {
            k-=chalk[index];
            index=(index+1==size)?0:index+1;
            if(k<chalk[index])
            {
                return index;
            }
        }
        return 0;
    }
};
//
int main()
{
    Solution S;
    vc arr = {2, 2, 3};
    int k = 1;
    cout << S.chalkReplacer(arr, k);
    return 0;
}
