#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a <= 50)
    {
        if(b > a)
            cout << "win";
        else
            cout << "lose";
    }
    else
    {
        if(a > b)
            cout << "win";
        else
            cout << "lose";
    }
	return 0;
}
