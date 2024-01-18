// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
//
struct LinkedList
{
    int val;
    LinkedList *next;
    LinkedList()
    {
        val = 0;
        next = nullptr;
    };
    LinkedList(int val) : val(val) { next = nullptr; };
    LinkedList(int val, LinkedList *next) : val(val), next(next){};
};

//
int main()
{
    LinkedList *a = new LinkedList(1);
    LinkedList *b = new LinkedList(2,a);
    // vc v={};

    return 0;
}
