#include<iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    //2.8
    std::cout << "2\115\012";
    std::cout << "2\t\115\012";

    std::cout << 123456789 << std::endl;

    // int i = 100, sum = 0;
    // for (int i = 0; i != 10; ++i)
    //     sum += i;
    // std::cout << i << " " << sum << std::endl;

    return 0;
}
