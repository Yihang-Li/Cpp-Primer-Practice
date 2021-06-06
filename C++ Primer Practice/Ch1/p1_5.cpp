#include<iostream>
#include "Sales_item.h"

int main()
{
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2;
    // std::cout << item1 + item2 << std::endl;

    // Sales_item item_sum, item;
    // std::cin >> item_sum;
    // while (std::cin >> item){
    //     item_sum += item;
    // }
    // std::cout << item_sum << std::endl;

    Sales_item curritem, item;
    if (std::cin >> curritem){
        int cnt = 1;
        while (std::cin >> item){
            if (curritem.isbn() == item.isbn()){
                ++cnt;
            }
            else{
                std::cout << curritem.isbn() << " occurs "
                          << cnt << "times" << std::endl;
                curritem = item;
                cnt = 1;
            }
        }
        std::cout << curritem << " occurs " << cnt << "times" << std::endl;
    }
    return 0;
}
