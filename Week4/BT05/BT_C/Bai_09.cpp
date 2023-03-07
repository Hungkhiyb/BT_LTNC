#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    cout << rand() % n;
    return 0;
}
