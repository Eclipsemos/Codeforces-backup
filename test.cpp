// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>

class A
{
    int a;

public:
    virtual void f()
    {
        cout << "parent";
    }
};

class B : public A
{
    int b;

public:
    virtual void f()
    {
        cout << "child";
    }
};

int main()
{
    A* pa = new B();
    pa->f();
    return 0;
}
