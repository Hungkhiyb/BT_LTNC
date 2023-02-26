#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = 0;
    int tmp = 1;
    int posx = n / 2;
    int posy = 0;
    while(tmp <= n * n)
    {
        if(posx >= n)
            posx -= n;
        if(posy < 0)
            posy += n;
        if(a[posy][posx] == 0)
        {
            a[posy][posx] = tmp;
            tmp++;
        }
        else
        {
            posy += 2;
            posx -= 1;
            if(posx < 0)
                posx += n;
            if(posy >= n)
                posy -= n;
            a[posy][posx] = tmp;
            tmp++;
        }

        posx++;
        posy--;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
