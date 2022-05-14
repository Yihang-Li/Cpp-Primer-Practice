#include<iostream>

int main()
{
    // int i, &ri = i;
    // i = 5;
    // ri = 10;
    // std::cout << i << " " << ri << std::endl;
    int i = 1, *p = &i;
    int j = 5;
    std::cout << *p << std::endl;
    p = &j;
    std::cout << *p << std::endl;
    *p = 10;
    std::cout << *p << ' ' << j << std::endl;
    // int i = 0, *p = &i;
    // std::cout << i << ' ' << *p << ' '<< p << std::endl;
    // *p = 7;
    // int j = 9;
    // p = &j;
    // std::cout << i << ' ' << *p << ' ' << p << std::endl;
    return 0;
}
