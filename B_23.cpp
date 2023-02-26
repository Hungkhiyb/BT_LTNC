#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    (abs(a - b) == a - b)? cout << a : cout << b;
    return 0;
}
