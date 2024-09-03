// Eclipsemos UWMADISON CS 2023
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//

class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        vector<vector<int>> answer = matrix;
        map<int,int> list;
        for(int i=0;i<matrix[0].size();i++)
        {
            //list[i]
            int curr = -1;
            for(int j=0;j<matrix.size();j++)
            {
                list[i] = max(curr,matrix[j][i]);
            }
            for(int j=0;j<matrix.size();j++)
            {
                if(answer[j][i]==-1)
                    answer[j][i] = list[i];
            }
        }
        return matrix;

    }
};

int main()
{
    Solution S;

    return 0;
}
