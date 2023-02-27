#include <iostream>

using namespace std;

bool check(int a[],int n)
{
    int left = 0;
    int right = 0;
    for(int j = 0; j < n; j++)
    {
        cin >> a[j];
        right +=a[j];
    }
    for(int j = 0; j < n; j++)
    {
        right -= a[j];
        if(left == right)
            return true;
        left += a[j];
    }
    return false;
}


int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        if(check(a, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
