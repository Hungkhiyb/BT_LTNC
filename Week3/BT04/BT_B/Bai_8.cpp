#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double male[n], female[n];
    for(int i = 0; i < n; i++)
        cin >> male[i] >> female[i];
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            if(male[i] > male[j])
                swap(male[i], male[j]);
            if(female[i] > female[j])
                swap(female[i], female[j]);
        }
    for(int i = 0; i < n; i++)
        if(male[i] < female[i])
        {
            cout << "No";
            return 0;
        }
    cout << "Yes";
    return 0;
}
