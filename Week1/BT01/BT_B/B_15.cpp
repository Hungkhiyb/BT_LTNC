#include <iostream>

using namespace std;

int main()
{
    string tmp1 = "a";
    string tmp2 = "b";
    string s = "";
    for(int i = 0; i < 10; i++)
    {
        cout << tmp1 << endl;
        s = tmp2 + tmp1;
        tmp1 = tmp2;
        tmp2 = s;
    }
    return 0;
}
