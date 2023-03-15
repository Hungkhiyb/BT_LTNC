#include <iostream>
#include <ctime>

using namespace std;

void turnDice(int& a, int k)
{
    int n = rand() % 6 + 1;
    a += n;
    cout << "xuc xac nguoi choi " << k << ": " << n << "\t\tTong nguoi " << k << ": " << a << endl;
}

int main()
{
    srand(time(NULL));
    int player1 = 0, player2 = 0;
    /*
    while(true)
    {
        turnDice(player1, 1);
        if(player1 >= 100)
            break;
        turnDice(player2, 2);
        if(player2 >= 100)
            break;
    }
    */
    while(true)
    {
        if(player1 <= player2)
            turnDice(player1, 1);
        if(player1 >= 100)
            break;

        if(player2 < player1)
            turnDice(player2, 2);
        if(player2 >= 100)
            break;
    }

    return 0;
}
