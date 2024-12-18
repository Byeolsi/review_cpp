#include <iostream>
#include <cstring>

using namespace std;

class First
{
private:
    char *strOne;

public:
    First(char *str)
    {
        strOne = new char[strlen(str) + 1];
        cout << "First()" << endl;
    }

    ~First()
    {
        cout << "~First()" << endl;
        delete[] strOne;
    }
};

class Second : public First
{
private:
    char *strTwo;

public:
    Second(char *str1, char *str2) : First(str1)
    {
        strTwo = new char[strlen(str2) + 1];
        cout << "Second()" << endl;
    }

    ~Second()
    {
        cout << "~Second()" << endl;
        delete[] strTwo;
    }
};

int main(void)
{
    First *ptr = new Second((char *)"simple", (char *)"complex");
    delete ptr;

    return 0;
}