#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double p = 1.0 * (a + b + c) / 2;
    cout << sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}
