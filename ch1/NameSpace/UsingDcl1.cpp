#include <iostream>

using std::cin;
using std::cout;
using std::endl;

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
}

int main(void)
{
    using Hybrid::HybFunc;
    HybFunc();

    int num = 20;
    cout << num << ' ' << 'A' << endl;

    return 0;
}