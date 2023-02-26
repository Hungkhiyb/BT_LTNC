#include <iostream>

using namespace std;

int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    if(m < 3)
    {
        m += 12;
        y--;
    }
    int DayofWeek = (d + 2*m + (3*(m + 1)) / 5 + y + (y / 4)) % 7;
    switch (DayofWeek){
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
    }
    return 0;
}
