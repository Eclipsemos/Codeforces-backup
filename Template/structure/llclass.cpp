// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
class LinkedList
{
private:
    int val;
    LinkedList *next;

public:
    LinkedList()
    {
        val = 0;
        next = nullptr;
    }
    
    LinkedList(int v)
    {
        val = v;
        next = nullptr;
    }

    LinkedList(int v, LinkedList* n)
    {
        val = v;
        next = n;
    }
};
//
int main()
{
    LinkedList* x = new LinkedList(1);
    LinkedList* y = new LinkedList(2,x);
    // vc v={};

    return 0;
}
