#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << ' ';
    int tmp = n;
    while(n >= 0)
    {
        cin >> n;
        if(tmp == n)
            continue;
        else
            cout << n << ' ';
        tmp = n;
    }
    return 0;
}
