#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

//
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        for (int i = 0; i <= 8; i++)
        {
            map<char, int> mp;
            map<char, int> mp1;
            for(int j=0;j<=8;j++)
            {
                char curr1 = board[i][j];
                if(curr1!='.')
                {
                    if(mp[board[i][j]]!=0)
                    {
                        return false;
                    }
                    mp[board[i][j]]++;
                }
                char curr2 = board[j][i];
                if(curr2!='.')
                {
                    if(mp1[board[j][i]]!=0)
                    {
                        return false;
                    }
                    mp1[board[j][i]]++;
                }
            }
        }
        vector<map<char,int>> chunk(9);
        //#0
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[0][board[i][j]]!=0)
                     return false;
                    chunk[0][board[i][j]]++;
                }
            }
        }
        //#1
        for(int i=3;i<=5;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[1][board[i][j]]!=0)
                     return false;
                    chunk[1][board[i][j]]++;
                }
            }
        }
        //#2
        for(int i=6;i<=8;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[2][board[i][j]]!=0)
                     return false;
                    chunk[2][board[i][j]]++;
                }
            }
        }
        //#3
        for(int i=0;i<=2;i++)
        {
            for(int j=3;j<=5;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[3][board[i][j]]!=0)
                     return false;
                    chunk[3][board[i][j]]++;
                }
            }
        }
        //#4
        for(int i=3;i<=5;i++)
        {
            for(int j=3;j<=5;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[4][board[i][j]]!=0)
                     return false;
                    chunk[4][board[i][j]]++;
                }
            }
        }
        //#5
        for(int i=6;i<=8;i++)
        {
            for(int j=3;j<=5;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[5][board[i][j]]!=0)
                     return false;
                    chunk[5][board[i][j]]++;
                }
            }
        }
        //#6
        for(int i=0;i<=2;i++)
        {
            for(int j=6;j<=8;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[6][board[i][j]]!=0)
                     return false;
                    chunk[6][board[i][j]]++;
                }
            }
        }
        //#7
        for(int i=3;i<=5;i++)
        {
            for(int j=6;j<=8;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[7][board[i][j]]!=0)
                     return false;
                    chunk[7][board[i][j]]++;
                }
            }
        }
        //#8
        for(int i=6;i<=8;i++)
        {
            for(int j=6;j<=8;j++)
            {
                if(board[i][j]!='.')
                {
                    if(chunk[8][board[i][j]]!=0)
                     return false;
                    chunk[8][board[i][j]]++;
                }
            }
        }

        return true;
    }
};
//
int main()
{
    Solution S;

    return 0;
}
