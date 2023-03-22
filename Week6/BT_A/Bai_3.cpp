#include <iostream>

using namespace std;

struct Point
{
    double x, y;
};

Point mid_point(const Point& a, const Point& b)
{
    Point c;
    c.x = (a.x + b.x) / 2;
    c.y = (a.y + b.y) / 2;
    return c;
}

int main()
{
    Point a = {3, 3};
    Point b = {1, 1};
    Point c = mid_point(a, b);
    cout << "(" << c.x << ", " << c.y << ")";
    return 0;
}
