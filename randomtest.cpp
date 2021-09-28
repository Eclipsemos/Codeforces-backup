#include <iostream>
#include <random>
using namespace std;

void update(int* x)
{
    int *a;
    a = (int*)malloc(sizeof(int));
    *a = 1;
    x = a;
    cout << *a << endl;
}
int main()
{
    int a = 4;
    int *b = &a;
    cout << *b << endl;
    update(b);
    cout << *b << endl;
    return 0;
}