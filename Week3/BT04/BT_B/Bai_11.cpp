#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
    {
        int a = s[i].size();
        string tmp = "";
        for(int j = 0; j < a; j++)
            tmp = s[i][j] + tmp;
        for(int j = i + 1; j < n; j++)
            if(tmp == s[j])
                cout << a << ' ' << s[j][a / 2];
    }
    return 0;
}
