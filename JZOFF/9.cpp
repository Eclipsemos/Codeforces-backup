// Xinyun Ye UWMADISON CS 2021
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class CQueue
{
public:
    stack<int> stk1, stk2;
    CQueue()
    {
        while (!stk1.empty())
            stk1.pop();
        while (!stk2.empty())
            stk2.pop();
    }

    void appendTail(int value)
    {
        stk1.push(value);
    }

    int deleteHead()
    {
        int v = -1;
        while (!stk1.empty())
        {
            stk2.push(stk1.top());
            stk1.pop();
        }
        if (!stk2.empty())
        {
            v = stk2.top();
            stk2.pop();
        }

        while (!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return v;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//
int main()
{
    Solution S;
    // vc v={};

    return 0;
}
