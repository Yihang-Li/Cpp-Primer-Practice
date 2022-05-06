#include<iostream>

int main()
{
    int i = 0, *p = &i;
    std::cout << i << ' ' << *p << ' '<< p << std::endl;
    *p = 7;
    int j = 9;
    p = &j;
    std::cout << i << ' ' << *p << ' ' << p << std::endl;
    return 0;
}
