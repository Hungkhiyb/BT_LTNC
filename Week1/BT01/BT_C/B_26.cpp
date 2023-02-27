#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double tb = 0;
    int _max = -100000000;
    int _min = 100000000;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        tb += a;
        if(a > _max) _max = a;
        if(a < _min) _min = a;
    }
    tb /= n;
    cout << "Mean: " << tb << endl;
    cout << "Max: " << _max << endl;
    cout << "Min: " << _min << endl;
    return 0;
}
