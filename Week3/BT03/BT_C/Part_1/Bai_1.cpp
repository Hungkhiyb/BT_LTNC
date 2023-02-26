#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool a[n] = {};
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if(!a[tmp - 1])
            a[tmp - 1] = true;
        else
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}
