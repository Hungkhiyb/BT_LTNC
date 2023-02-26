#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n % 4 == 0)
    {
        if(n % 400 == 0)
            cout << "true";
        else if(n % 100 == 0)
            cout << "false";
        else
            cout << "true";
    }
    else
        cout << "false";
    return 0;
}
