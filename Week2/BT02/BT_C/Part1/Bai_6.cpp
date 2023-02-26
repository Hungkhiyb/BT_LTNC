#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int tmp = i;
        for(int j = 1; j <= n; j++)
        {
            cout << tmp << ' ';
            tmp ++;
            if(tmp > n)
                tmp -= n;
        }
        cout << endl;
    }
    return 0;
}
