#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = n / 2; i >= - n / 2; i--)
    {
        for(int j = - n / 2; j <= n / 2; j++)
        {
            if(i >= -j)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
