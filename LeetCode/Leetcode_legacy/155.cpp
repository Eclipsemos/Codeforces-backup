// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class MinStack
{
private:
    stack<int> stk1;
    stack<int> stk2;
public:
    MinStack()
    {
        while(!stk1.empty())
            stk1.pop();
        while(!stk2.empty())
            stk2.pop();
    }

    void push(int val)
    {
        stk1.push(val);
        if(stk2.empty())
            stk2.push(val);
        else
        {
            if(stk2.top()<val)
                stk2.push(stk2.top());
            else
                stk2.push(val);
        }
    }

    void pop()
    {
        stk1.pop();
        stk2.pop();
    }

    int top()
    {
        return stk1.top();
    }

    int getMin()
    {
        return stk2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
//
int main()
{
    // vc v={};

    return 0;
}
