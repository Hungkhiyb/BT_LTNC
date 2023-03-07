#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    while(b != 0)
    {
        a %= b;
        int tmp = a;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if(UCLN(a, b) == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
