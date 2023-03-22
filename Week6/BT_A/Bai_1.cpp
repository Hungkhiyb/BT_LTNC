#include <iostream>

using namespace std;

struct Point
{
    double x, y;
};

void print(Point& a)
{
    cout << "(" << a.x << ", " << a.y << ")";
}

int main()
{
    Point a = {1, 1};
    print(a);
    return 0;
}
