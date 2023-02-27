#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n - 1];
    for(int i = 0; i < n - 1; i++)
        a[i] = i + 2;
    for(int i = 2; i <= n; i++)
    {
        if(a[i - 2] == 0)
            continue;
        int tmp = i + i;
        while(tmp <= n)
        {
            a[tmp - 2] = 0;
            tmp += i;
        }
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != 0)
            cout << a[i] << ' ';
    }
    return 0;
    return 0;
}
