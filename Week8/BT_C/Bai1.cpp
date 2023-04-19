#include <iostream>

using namespace std;

struct String
{
    int n = 0;
    char* str;

    String(const char* a){
        str = new char[100];
        for(const char* e = a; *e != '\0'; e++)
        {
            str[n] = *e;
            n++;
        }
        str[n] = '\0';
    }
    ~String(){
        delete [] str;
    }

    void print(){
        cout << str << endl;
    }

    void append(const char* a){
        for(const char* e = a; *e != '\0'; e++)
        {
            str[n] = *e;
            n++;
        }
        str[n] = '\0';
    }
};

int main()
{
    String s("Hello");
    s.print();
    s.append(" World!");
    s.print();
    return 0;
}
