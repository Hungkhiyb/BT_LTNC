#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int y = n - 1; y >= 0; y--)
    {
        for(int x = -n + 1; x < n; x++)
        {
            if(y >= abs(x))
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
