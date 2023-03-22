#include <iostream>

using namespace std;

struct Point
{
    int x, y;
};

void print(Point a, Point& b)
{
    cout << &a << endl;
    cout << &b << endl;
}

int main()
{
    Point a;
    cout << &a << "\n\n";
    print(a, a);
    return 0;
}
