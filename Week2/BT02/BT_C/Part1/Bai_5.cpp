#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << "zero";
        return 0;
    }
    bool negative = false;
    if(n < 0)
    {
        n = -n;
        negative = true;
    }
    string num = "";
    int tmp = 0;
    int i = 1;
    while(n != 0)
    {
        int m = n % 10;
        if(i == 4 && m != 0)
            num = "thousand " + num;
        if(i == 7 && m != 0)
            num = "million " + num;
        if(((i - 1) % 3 == 0 || i % 3 == 0) && ((n / 10) % 10 != 1 || (i - 1) % 3 != 0))
        {
            if(i % 3 == 0 && m != 0)
                num = "hundred " + num;
            if(m == 1)
                num = "one " + num;
            if(m == 2)
                num = "two " + num;
            if(m == 3)
                num = "three " + num;
            if(m == 4)
                num = "four " + num;
            if(m == 5)
                num = "five " + num;
            if(m == 6)
                num = "six " + num;
            if(m == 7)
                num = "seven " + num;
            if(m == 8)
                num = "eight " + num;
            if(m == 9)
                num = "nine " + num;
        }
        if((i - 2) % 3 == 0)
        {
            if(m == 1)
            {
                if(tmp == 0)
                    num = "ten " + num;
                if(tmp == 1)
                    num = "eleven " + num;
                if(tmp == 2)
                    num = "twelve " + num;
                if(tmp == 3)
                    num = "thirteen " + num;
                if(tmp == 4)
                    num = "fourteen " + num;
                if(tmp == 5)
                    num = "fifteen " + num;
                if(tmp == 6)
                    num = "sixteen " + num;
                if(tmp == 7)
                    num = "seventeen " + num;
                if(tmp == 8)
                    num = "eighteen " + num;
                if(tmp == 9)
                    num = "nineteen " + num;
            }
            if(m == 2)
                num = "twenty-" + num;
            if(m == 3)
                num = "thirty-" + num;
            if(m == 4)
                num = "forty-" + num;
            if(m == 5)
                num = "fifty-" + num;
            if(m == 6)
                num = "sixty-" + num;
            if(m == 7)
                num = "seventy-" + num;
            if(m == 8)
                num = "eighty-" + num;
            if(m == 9)
                num = "ninety-" + num;
        }
        tmp = m;
        n /= 10;
        i++;
    }
    if(negative)
        num = "negative " + num;
    cout << num;
    return 0;
}
