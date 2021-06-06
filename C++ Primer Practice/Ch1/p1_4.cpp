#include<iostream>

int main()
{
    int sum = 0, val = 50, p10 = 10;
    while (val <= 100){
        sum += val;
        ++val;
        if (p10 > -1){
            std::cout << p10 << std::endl;
            --p10;
        }
    }
    std::cout << "Sum of 50 to 100 inclusive is "
              << sum << std::endl;

    // std::cout << "Please input two numbers: (v1 <= v2) "<< std::endl;
    // int v1 = 0, v2 = 0;
    // std::cin >> v1 >> v2;
    // while (v1 <= v2){
    //     std::cout << v1 << std::endl;
    //     ++v1;
    // }
    // // for
    // int sum2 = 0;
    // for (int val = 50; val <= 100; ++val)
    //     sum2 += val;
    // std::cout << sum2 << ' ' << val << std::endl;

    // int sum3 = 0, nums = 0;
    // while (std::cin >> nums){
    //     sum3 += nums;
    // }
    // std::cout << sum3 << std::endl;

    // 1.19
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    if (num1 < num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    std::cout << num1 << " and " << num2 << std::endl;
    while (num2 <= num1){
        std::cout << num2 << std::endl;
        num2++;
    }

    return 0;
}
