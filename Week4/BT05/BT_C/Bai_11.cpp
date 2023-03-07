#include <iostream>

using namespace std;

string decimalToBinary(int n)
{
    string s = "";
    while(n != 0)
    {
        s = char(n % 2 + '0') + s;
        n /= 2;
    }
    return s;
}

int binaryToDecimal(string s)
{
    int binarySize = s.size();
    binarySize --;
    int decimal = 0;
    for(int i = 1; binarySize >= 0; i*= 2)
    {
        decimal += (s[binarySize] - '0') * i;
        binarySize --;
    }
    return decimal;
}

int main()
{
    int n;
    cin >> n;
    string Binary = decimalToBinary(n);
    cout << Binary << endl;

    int Decimal = binaryToDecimal(Binary);
    cout << Decimal << endl;
    return 0;
}
