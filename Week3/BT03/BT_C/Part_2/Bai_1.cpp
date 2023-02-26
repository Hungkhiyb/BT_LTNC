#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    double tb = 0;
    double variance = 0;
    vector <int> a;
    int tmp;
    while(cin >> tmp)
    {
        tb += tmp;
        a.push_back(tmp);
    }
    int n = a.size();
    tb /= n;
    for(int i = 0; i < n; i++)
        variance += (a[i] - tb) * (a[i] - tb);
    variance /= n;
    cout << setprecision(2) << fixed << tb << endl;
    cout << setprecision(2) << fixed << variance;
    return 0;
}
