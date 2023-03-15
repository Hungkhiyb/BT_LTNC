#include <iostream>

using namespace std;

bool BinarySearch(int* a, int& right, int& left, int k)
{
    if(left == right && a[0] == k)
        return true;

    int tmp = (right - left) / 2;

    if(a[tmp] < k)
    {
        left = tmp + left + 1;
        return false;
    }
    else
    {
        right = tmp + left;
        return false;
    }

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int right = n - 1;
    int left = 0;
    while(left <= right)
    {
        if(BinarySearch(&a[left], right, left, k))
        {
            cout << left;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}
