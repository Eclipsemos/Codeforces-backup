// Eclipsemos UWMADISON CS 2022
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vc vector<int>
#define swap(a, b)      \
    typeof(a) temp = a; \
    a = b;              \
    b = temp;
#define PI 3.14
//
class Shape
{
private:
    double area;

public:
    Shape(double a) { area = a; }
    double getArea() { return area; }
    void setArea(double a) { area = a; }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : Shape(PI * r * r) { radius = r; }
    double getRadius() { return radius; }
    void setRadius(double r)
    {
        setArea(PI * r * r);
        radius = r;
    }
};
class A
{
public:
    virtual void update(Circle &c) {}
};
class B : public A
{
public:
    virtual void update(Shape &s) {}
};
//
int main()
{
    Circle c(7); // Circle radius is 7
    B b;
    A *a = &b;
    a->update(c);
    return 0;
}
