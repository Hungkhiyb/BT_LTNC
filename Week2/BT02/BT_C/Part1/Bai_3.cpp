#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int y = 0; y > -n; y--)
    {
        for(int x = -n + 1; x < n; x++)
        {
            if(y <= -abs(x))
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
