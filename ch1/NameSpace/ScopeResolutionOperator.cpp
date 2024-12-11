#include <iostream>

using namespace std;

int val = 100;

int main(void)
{
    int val = 20;

    val += 3;   // 지역변수 val의 값 3 증가
    ::val += 7; // 전역변수 val의 값 7 증가

    cout << val << endl;   // 지역변수 val 출력
    cout << ::val << endl; // 전역변수 val 출력

    return 0;
}