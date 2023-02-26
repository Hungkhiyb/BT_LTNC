#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    char a[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];


    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] == '*')
                continue;
            int count = 0;
            for(int k = i - 1; k <= i + 1; k++)
                for(int l = j - 1; l <= j + 1; l++)
                {
                    if(k < 0 || k >= m || l < 0 || l >= n || (k == i && l == j))
                        continue;
                    if(a[k][l] == '*')
                        count++;
                }
            a[i][j] = char(count + '0');
        }
    cout << endl;


    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
