#include <iostream>

using namespace std;

int count_even(int* a, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            count++;
    return count;
}

int main()
{
    int a[10] = {1, 1, 3, 4, 7, 8, 6, 5, 0, 10};
    cout << count_even(&a[0], 5) << endl;
    cout << count_even(&a[5], 5) << endl;
    return 0;
}
