#include <iostream>

// 매크로 함수
#define SQUARE_MACRO(x) ((x) * (x))

// 인라인 함수
inline int SQUARE_INLINE(int x)
{
    return x * x;
}

int main(void)
{
    // 매크로 함수
    std::cout << "SQUARE_MACRO: " << SQUARE_MACRO(5) << std::endl;
    // 인라인 함수
    std::cout << "SQUARE_INLINE: " << SQUARE_INLINE(5) << std::endl;

    return 0;
}