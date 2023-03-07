#include <iostream>

using namespace std;

void print(int n)
{
    int tmp1 = n;
    int tmp2 = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < tmp1; j++)
            cout << ' ';

        for(int j = 0; j < tmp2; j++)
            cout << '*';

        tmp1--;
        tmp2 += 2;
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
