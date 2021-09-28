#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int f[502][502];
        memset(f, 0, sizeof(f));
        word1 = "x"+word1;
        word2 = "x"+word2;
        f[1][1] = (word1[1] == word2[1]) ? 1 : 0;
        for (int i = 1; i < word1.size(); i++)
        {
            for (int j = 1; j < word2.size(); j++)
            {
                if (word1[i] == word2[j])
                {
                    f[i][j] = f[i-1][j-1]+1;
                }
                else
                 f[i][j] = max(f[i][j-1],f[i-1][j]);
            }
        }
        return word1.size()+word2.size()-2-f[word1.size()-1][word2.size()-1]*2;
    }
};
//
int main()
{
    Solution S;
    cout<<S.minDistance("sea","eat");
    return 0;
}
