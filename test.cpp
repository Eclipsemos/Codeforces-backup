//Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
#define swap(a,b) typeof(a) temp = a; a = b; b = temp;
//
class A {
    int a;
public:
     void f() {
        cout<<"parent";
    }
};

class B : public A{
    int b;
public:
    void f() {
        cout<<"child";
    }
};

//
int main()
{
    A* pa = new B();
    pa->f();
  

    return 0;
 }
